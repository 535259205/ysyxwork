#include <dlfcn.h>
#include <capstone/capstone.h>
#include <inttypes.h>
#include "stdio.h"
#include "assert.h"
#include "sdb.h"
static uint32_t code[256];
csh handle;
cs_insn *insn;
void DisamsInit(void)
{
    assert(cs_open(CS_ARCH_RISCV, CS_MODE_RISCV32, &handle) == CS_ERR_OK);

}

void DisasmEncode(struct SdbReg * info,uint32_t len)
{
    size_t count;
	char temp[256];
	for (int i = 0; i < len; i++)
	{
		// extern uint32_t rom_read(uint32_t  addr);
        // code[i] = rom_read(address+i*4);
		code[0] = info->inst;
	}
	count = cs_disasm(handle, (const uint8_t *)code, len * 4, info->pc, 0, &insn);
    if (count > 0) {
		size_t j;
		for (j = 0; j < count; j++) {

			sprintf(temp,"0x%"PRIx64":\t0x%08X\t\t%s\t\t%s", insn[j].address, code[j],insn[j].mnemonic,
					insn[j].op_str);
			extern void iringbuf_add(char * s);
			iringbuf_add(temp);
		}

		cs_free(insn, count);
	} else{
		static int cnt = 0;
		cnt++;
		if(cnt<5)
			printf("ERROR: Failed to disassemble given code!\n");
	}
}