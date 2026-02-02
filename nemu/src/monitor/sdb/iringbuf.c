#include "stdio.h"
#include "string.h"
#include "stdbool.h"
#include "common.h"

#define BUF_LEN 20

static char buf[BUF_LEN][256];
static int BufIndex=0;
static char buf_mem[BUF_LEN][256];
static int BufMemIndex=0;

void iringbuf_add(char * s)
{
    strcpy(buf[BufIndex], s);
    BufIndex = (BufIndex + 1) % BUF_LEN;
}
void iringbuf_show()
{
    int i, start;
    start = (BufIndex - 1 + BUF_LEN) % BUF_LEN;  // 最近添加的元素位置
    for (i = 0; i < BUF_LEN; i ++) {
        // 按环形顺序打印，从最近的元素开始
        int index = (start - i + BUF_LEN) % BUF_LEN;
        printf("%s\n", buf[index]);
    }
}


void iringbuf_memadd(const char* Prefix, vaddr_t addr, int len, word_t data)
{
    sprintf(buf_mem[BufMemIndex], "%s addr=0x%08x, data=0x%08x ,len=%d", Prefix, addr, data, len);
    BufMemIndex = (BufMemIndex + 1) % BUF_LEN;
}
void iringbuf_memshow()
{
    int i, start;
    start = (BufMemIndex - 1 + BUF_LEN) % BUF_LEN;  // 最近添加的元素位置
    for (i = 0; i < BUF_LEN; i ++) {
        // 按环形顺序打印，从最近的元素开始
        int index = (start - i + BUF_LEN) % BUF_LEN;
        printf("%s\n", buf_mem[index]);
    }
}