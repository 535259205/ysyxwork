/***************************************************************************************
* Copyright (c) 2014-2024 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>
#include "common.h"
#include "memory/vaddr.h"
#include "/home/ylqt/study/YSYX_data/ysyx-workbench/nemu/src/isa/riscv32/local-include/reg.h"

enum {
  TK_NOTYPE = 256,
  TK_EQ,

  /* TODO: Add more token types */
  TK_HEX,          // 十六进制数（0x开头）
  TK_REG,          // 寄存器名（$开头）
  TK_NE,           // != 不等于
  TK_DEREF,        // 单目解引用*（区分双目乘号）

  TK_LE,     // <= 小于等于
  TK_GE,     // >= 大于等于 
  TK_AND,    // && 逻辑与
  TK_OR,     // || 逻辑或
  TK_NUM,    // 数字
  TK_PLUS,   // +
  TK_MINUS,  // -
  TK_MUL,    // *
  TK_DIV,    // /
  TK_LPAREN, // (
  TK_RPAREN, // )
};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */

  {" +", TK_NOTYPE},    // 空格（跳过）
  {"\\|\\|", TK_OR},    // || 逻辑或
  {"&&", TK_AND},       // && 逻辑与
  {"==", TK_EQ},        // == 等于号
  {"!=", TK_NE},        // != 不等于
  {"<=", TK_LE},        // <= 小于等于
  {">=", TK_GE},        // >= 大于等于
  {"==", TK_EQ},        // 等于号
  {"\\$[a-zA-Z0-9]+", TK_REG}, // 寄存器名（$开头）
  {"0x[0-9a-fA-F]+", TK_HEX}, // 十六进制数（0x开头）
  {"\\+", TK_PLUS},     // 加号
  {"\\-", TK_MINUS},    // 减号
  {"\\*", TK_MUL},      // 乘号
  {"\\/", TK_DIV},      // 除号
  {"\\(", TK_LPAREN},   // 左括号
  {"\\)", TK_RPAREN},   // 右括号
  {"[0-9]+", TK_NUM},   // 数字（0-9的任意组合）
};

#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] = {};

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i ++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    if (ret != 0) {
      regerror(ret, &re[i], error_msg, 128);
      panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}

typedef struct token {
  int type;
  char str[32];
} Token;

static Token tokens[32*500] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;

// 辅助函数：区分单目解引用*和双目乘号*
static void distinguish_deref_mul() {
  for (int i = 0; i < nr_token; i++) {
    if (tokens[i].type != TK_MUL) continue;

    // 以下情况*是单目解引用：
    // 1. 在表达式开头；2. 左括号后面；3. 运算符后面（+、-、*、/、==、!=、&&、||、<=、>=）
    if (i == 0 || 
        tokens[i-1].type == TK_LPAREN || 
        tokens[i-1].type == TK_PLUS || 
        tokens[i-1].type == TK_MINUS || 
        tokens[i-1].type == TK_MUL || 
        tokens[i-1].type == TK_DIV || 
        tokens[i-1].type == TK_EQ || 
        tokens[i-1].type == TK_NE || 
        tokens[i-1].type == TK_AND || 
        tokens[i-1].type == TK_OR || 
        tokens[i-1].type == TK_LE || 
        tokens[i-1].type == TK_GE) {
      tokens[i].type = TK_DEREF; // 标记为单目解引用
    }
  }
}

static bool make_token(char *e) {
  int position = 0;
  int i;
  regmatch_t pmatch;
  nr_token = 0;

  while (e[position] != '\0') {
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;

        Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
            i, rules[i].regex, position, substr_len, substr_len, substr_start);

        position += substr_len;

        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */

        switch (rules[i].token_type) {
          case TK_NOTYPE:
            break;
          default:
            tokens[nr_token].type = rules[i].token_type;
            strncpy(tokens[nr_token].str, substr_start, substr_len);
            tokens[nr_token].str[substr_len] = '\0';
            nr_token++;
            break;
        }

        break;
      }
    }

    if (i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }
  distinguish_deref_mul();
  return true;
}
bool check_parentheses(uint32_t p, uint32_t q) {//逻辑有错误
  int count = 0;
  int i = 0;
  int flag = 0;
  for(i=p;i<=q;i++)
  {
    if(tokens[i].type == TK_LPAREN)
    {
      count++;
      flag = 1;
    }
    if(tokens[i].type == TK_RPAREN)
    {
      count--;
      flag = 1;
    }
    if(count <= 0 && i>p && i<q)
    {
      return 0;
    }
  }

  return count == 0 && flag == 1;
}

// 运算符优先级（数值越大优先级越高）
static int get_op_priority(int op_type) {
  switch (op_type) {
    case TK_OR:     return 0;  // || 最低
    case TK_AND:    return 1;  // &&
    case TK_EQ:     // ==
    case TK_NE:     // !=
    case TK_LE:     // <=
    case TK_GE:     // >= 关系运算符同级
                    return 2;
    case TK_PLUS:   // +
    case TK_MINUS:  // -
                    return 3;
    case TK_MUL:    // * 双目乘号
    case TK_DIV:    // /
                    return 4;
    case TK_DEREF:  // 单目解引用* 优先级最高
                    return 5;
    default:        return -1;
  }
}

// 查找主运算符（优先级最低的运算符，处理单目/双目）
static uint32_t find_main_op(uint32_t p, uint32_t q, bool *success) {
  *success = true;
  int min_prio = 6; // 初始值高于所有运算符优先级
  uint32_t main_op_pos = -1;
  int bracket_count = 0;

  // 左结合运算符：从右往左找；单目运算符是前缀，不影响主运算符查找
  for (int i = q; i >= (int)p; i--) {
    // 跳过括号内的内容
    if (tokens[i].type == TK_LPAREN) bracket_count--;
    if (tokens[i].type == TK_RPAREN) bracket_count++;
    if (bracket_count != 0) continue;

    int prio = get_op_priority(tokens[i].type);
    if (prio == -1) continue; // 非运算符

    // 更新主运算符：优先级更低，或同优先级取右侧（左结合）
    if (prio < min_prio) {
      min_prio = prio;
      main_op_pos = i;
    }
  }

  if (main_op_pos == (uint32_t)-1) {
    *success = false;
    printf("Error: No main operator found in tokens[%d..%d]\n", p, q);
  }
  return main_op_pos;
}

// 辅助函数：读取寄存器值
static uint32_t get_reg_value(char *reg_str)
{
  // 去掉开头的$，如$eax → eax
  char *reg_name_temp = reg_str;
  reg_name_temp++;
  for (int i = 0; i < 32;i++)
  {
    if(strcmp(reg_name_temp,reg_name(i)) == 0)
    {
      return gpr(i);
    }
  }
  return 0;
}

// 辅助函数：读取内存值（指针解引用）
static uint32_t mem_read(uint32_t addr) {
  uint32_t data=vaddr_read(addr,1);
  return data;
}

int eval(uint32_t p,uint32_t q)
{
  if (p > q)
  {
    printf("Bad expression: %d > %d\n", p, q);
    assert(0);
  }
  else if (p == q ) {
      switch (tokens[p].type) {
      case TK_NUM: // 十进制数
        return strtol(tokens[p].str, NULL, 10);
      case TK_HEX: // 十六进制数
        return strtol(tokens[p].str, NULL, 16);
      case TK_REG: // 寄存器
        return get_reg_value(tokens[p].str);
      default:
        printf("Error: Invalid single token (type=%d, str=%s)\n", tokens[p].type, tokens[p].str);
        return 0;
    }
  }
    else if (check_parentheses(p, q) == true) {//判断现在所指的是不是完整的括号
      /* The expression is surrounded by a matched pair of parentheses.
      * If that is the case, just throw away the parentheses.
      */
      return eval(p + 1, q - 1);
    }
    else {
      /* TODO: Add more cases. */
      // 查找主运算符
      bool op_success;
      uint32_t main_op_pos = find_main_op(p, q, &op_success);
      // 处理单目运算符（解引用*）
      if (tokens[main_op_pos].type == TK_DEREF) {
        int addr = eval(main_op_pos + 1, q); // 解引用的地址
        return mem_read(addr); // 读取内存值
      }

      // 双目运算符：递归计算左右子表达式
      int left_val, right_val;
      left_val = eval(p, main_op_pos - 1);

      // 短路优化：|| 和 &&
      if (tokens[main_op_pos].type == TK_OR && left_val != 0) {
        return 1;
      }
      if (tokens[main_op_pos].type == TK_AND && left_val == 0) {
        return 0;
      }

      right_val = eval(main_op_pos + 1, q);

      // 运算符求值
      switch (tokens[main_op_pos].type) {
        case TK_PLUS:  return left_val + right_val;
        case TK_MINUS: return left_val - right_val;
        case TK_MUL:   return left_val * right_val;
        case TK_DIV:   
          if (right_val == 0) {
            printf("Error: Division by zero\n");
            return 0;
          }
          return left_val / right_val;
        case TK_EQ:    return (left_val == right_val) ? 1 : 0;
        case TK_NE:    return (left_val != right_val) ? 1 : 0;
        case TK_LE:    return (left_val <= right_val) ? 1 : 0;
        case TK_GE:    return (left_val >= right_val) ? 1 : 0;
        case TK_AND:   return (left_val && right_val) ? 1 : 0;
        case TK_OR:    return (left_val || right_val) ? 1 : 0;
        default:
          printf("Error: Unsupported operator (type=%d)\n", tokens[main_op_pos].type);
          return 0;
      }
       
    }
}

int expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;
    return 0;
  }
  /* TODO: Insert codes to evaluate the expression. */
  return eval(0, nr_token - 1);

  return 0;
}
