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

#include "sdb.h"

#define NR_WP 32

typedef struct watchpoint {
  int NO;
  struct watchpoint *next;

  /* TODO: Add more members if necessary */
  char expr[128];             // 要监视的表达式字符串（如 "a==b&&c<=5"）
  uint32_t last_val;          // 表达式上一次的求值结果（用于检测变化）
} WP;

static WP wp_pool[NR_WP] = {};
static WP *head = NULL, *free_ = NULL;

void init_wp_pool() {
  int i;
  for (i = 0; i < NR_WP; i ++) {
    wp_pool[i].NO = i;
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
  }

  head = NULL;
  free_ = wp_pool;
}

/* TODO: Implement the functionality of watchpoint */

WP* new_wp()
{
  if(free_==NULL)
  {
    printf("No free watchpoint available\n");
    return NULL;
  }
  //头插法
  WP *wp = free_;
  free_ = free_->next;
  wp->next = head;
  head = wp;
  return wp;
}
void free_wp(WP *wp)
{
  WP *head_temp = head;

  wp->next = free_;
  free_ = wp;

  if (head_temp == wp)
  {
    head = head_temp->next;
  }
  else
  {
    while (head_temp->next != wp)
    {
      head_temp = head_temp->next;
    }
    head_temp->next = wp->next;
  }
}

void wp_display(void)
{
  WP *wp = head;
  while(wp != NULL)
  {
    printf("NO: %d, expr: %s, last_val: %d\n", wp->NO, wp->expr, wp->last_val);
    wp = wp->next;
  }
}

void add_scan(char *args)
{
  WP *wp = new_wp();
  if(wp == NULL)
  {
    return;
  }
  strcpy(wp->expr, args);
  wp->last_val = expr(args, NULL);
}
void delete_scan(int no)
{
  WP *wp = head;
  while(wp != NULL)
  {
    if(wp->NO == no)
    {
      free_wp(wp);
      return;
    }
    wp = wp->next;
  }
  printf("No watchpoint %d\n", no);
}
void all_scan(void)
{
  WP *wp = head;
  while(wp != NULL)
  {
    int temp = expr(wp->expr, NULL);
    if(temp != wp->last_val)
    {
      printf("Watchpoint %d: %s\n", wp->NO, wp->expr);
      printf("Old value = %d\n", wp->last_val);
      printf("New value = %d\n", temp);
      wp->last_val = temp;
    }
    wp = wp->next;
  }
}