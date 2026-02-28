#include <iostream>
#include "../obj_dir/VysyxSoCFull.h"
#include "verilated_vcd_c.h"
#include "verilated.h"
#include "stdio.h"
#include "sdb.h"


extern int ebreak_flag;
extern void mem_init(const char * file);
extern void SimInit(int argc, char **argv);
extern void SimEnd();
extern void SdbRun(void);
extern void DisamsInit(void);
extern int FtraceInit(char *elf_file);

extern void info_reg(struct SdbReg *info);

int main(int argc, char **argv)
{
  setvbuf(stdout, NULL, _IONBF, 0);
  mem_init("./hex/test.bin");

  SimInit(argc, argv);
  
  DisamsInit();

  FtraceInit("./hex/test.elf");

  SdbRun();

  struct SdbReg info;
  info_reg(&info);


  SimEnd();
  
  //0成功 1失败
  if(ebreak_flag && (info.reg[10]==0))
  {
    printf("ebreak success\n");
    return 0;
  }
  else{
    printf("ebreak fail\n");
    return 1;
  }
    
}
