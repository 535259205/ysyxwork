#include "stdio.h"
#include "string.h"
#include "stdbool.h"
#include "common.h"

#define BUF_LEN 20

static char * buf[BUF_LEN];
static int BufIndex=0;
static int cnt = 0;

void dtrace_add(const char* name)
{
    
    buf[BufIndex] = strdup(name);
    BufIndex = (BufIndex + 1) % BUF_LEN;
    cnt++;
    if(cnt>BUF_LEN)
        cnt = BUF_LEN;
}
void dtrace_show()
{
    int i;
    for (i = 0; i < cnt; i ++) {
        printf("%s\n", buf[i]);
    }
    
}