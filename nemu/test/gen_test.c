#include "stdio.h"
#include "stdint.h"
#include "stdlib.h"
#include "string.h"
#include "time.h"
#include "unistd.h"

#define BUF_SIZE 200
#define C_CODE_BUF_SIZE 500
#define POF_SAFE_THRESHOLD (BUF_SIZE - 20)  // 预留20字节安全余量

char buf[BUF_SIZE];
char c_code_buf[C_CODE_BUF_SIZE];
int pof=0;

uint32_t choose(uint32_t n){
    return rand() % n;
}
int gen(char c)
{
  if(pof + 1 >= POF_SAFE_THRESHOLD){
    return 0;
  }
  buf[pof++] = c;
}

int gen_num(void)
{
  if(pof + 10 >= POF_SAFE_THRESHOLD){
    return 0;
  }
  uint32_t num;
  num = rand()%10000;
  sprintf(buf + pof, "%d", num);
  pof += strlen(buf + pof);
}
int gen_rand_op(void)
{
  char ops[] = "+-*/";
  if(pof + 1 >= POF_SAFE_THRESHOLD){
    return 0;
  }
  buf[pof++] = ops[choose(4)];

}


void gen_rand_expr(void)
{
  switch(choose(3))
  {
    case 0:
      gen_num();
      break;
    case 1:
      gen('(');
      gen_rand_expr();
      gen(')');
      break;
    case 2:
      gen_rand_expr();
      gen_rand_op();
      gen_rand_expr();
      break;
  }
}
int get_result(char * buf)
{
  int error;
  static int start = 0;
  buf[pof] = '\0';
  snprintf(c_code_buf, sizeof(c_code_buf),
           "#include <stdio.h>\n"
           "int main() {\n"
           "  unsigned result = (unsigned)(%s);\n"
           "  printf(\"%%u\", result);\n"
           "  return 0;\n"
           "}",
           buf);
  FILE * fp = fopen("test.c", "w");
  fwrite(c_code_buf, sizeof(char), strlen(c_code_buf), fp);
  fclose(fp);
  error = system("gcc -Werror=div-by-zero test.c -o test 2>/dev/null");
  if(error==256){
    pof = 0;
    return 1;
  }
  //写入结果
  if(start)
  {
    system("./test >> result.txt 2>/dev/null");
  }
  else
  {
    system("./test > result.txt 2>/dev/null");
  }
  //写入空格
  fp = fopen("result.txt", "a");
  fwrite(" ", sizeof(char), 1, fp);
  fclose(fp);
  //写入表达式
  fp = fopen("result.txt", "a");
  fwrite(buf, sizeof(char), pof, fp);
  fclose(fp);
  pof = 0;
  //写入换行符
  fp = fopen("result.txt", "a");
  fwrite("\n", sizeof(char), 1, fp);
  fclose(fp);
  start = 1;
  return 0;
}

int main(int argc, char const *argv[]) {
  int i;
  i=strtol(argv[1], NULL, 0);
  srand((unsigned int)time(NULL) ^ getpid());
  for(int j=0;j<i;j++)
  {
    gen_rand_expr();
    if(get_result(buf)){
      j--;
    }
  }
  return 0;

}