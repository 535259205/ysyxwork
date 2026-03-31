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


#define TEST 0
#if !TEST

#include <common.h>
void init_monitor(int, char *[]);
void am_init_monitor();
void engine_start();
int is_exit_status_bad();


int main(int argc, char *argv[]) {
  /* Initialize the monitor. */
#ifdef CONFIG_TARGET_AM
  am_init_monitor();
#else
  init_monitor(argc, argv);
#endif

  /* Start engine. */
  engine_start();

  extern void show_cache();
  show_cache();
  extern void branch_statistics();
  branch_statistics();

  return is_exit_status_bad();
}
#else
#include <common.h>

#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "stdbool.h"
void init_monitor(int, char *[]);

int expr(char *e, bool *success);
static char buf[2048];
static int testasd(void)
{ 
  FILE *fp = fopen("/home/ylqt/study/YSYX_data/ysyx-workbench/nemu/test/result.txt", "r");
  if (fp == NULL) {
    printf("open test.log failed\n");
    return -1;
  }
  char *temp1;
  char *temp2;
  unsigned int left;
  unsigned int right = 0;
  for (int i = 0; i < 5000; i++)
  {
    if (fgets(buf, sizeof(buf), fp) == NULL)
    {
      printf("read test.log failed\n");
      return -1;
    }
    temp1 = strtok(buf, " \n");
    temp2 = strtok(NULL, " \n");
    left= strtol(temp1, NULL, 10);
    if(left == expr(temp2,NULL))
    {
      right++;
    }
  }
  printf("right: %d\n", right);
  return 0;
}

int main(int argc, char *argv[]) {
  init_monitor(argc, argv);
  testasd();

  return 1;
}

#endif

