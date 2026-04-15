ENTRY(_start)
MEMORY{

    MROM  : ORIGIN = 0x20000000, LENGTH = 4K
    SRAM  : ORIGIN = 0x0f000000, LENGTH = 8K
    FLASH : ORIGIN = 0x30000000, LENGTH = 0x1000000
    /* PSRAM : ORIGIN = 0x80000000, LENGTH = 0x0100000 */
    SDRAM : ORIGIN = SDRAM_BASE, LENGTH = 0x1000000
    SDRAM_CODE : ORIGIN = SDRAM_BASE + LENGTH(SDRAM), LENGTH = 0x1000000
}

SECTIONS {
    . = ORIGIN(FLASH);
    .boot :
    {
        KEEP(*(entry))
        *(.fsbl)        /* FSBL: 复制 SSBL 到 SRAM 并跳转 */
    } > FLASH

    /* SSBL: VMA 在 SRAM，LMA 在 FLASH（紧跟 .boot 后） */
    .ssbl : {
        _ssbl_start = .;
        *(.ssbl)        /* SSBL: 负责把主程序搬运到 SDRAM */
        . = ALIGN(align_num);
        _ssbl_end = .;
    } > SRAM AT> FLASH

    _ssbl_load_start = LOADADDR(.ssbl);   /* .ssbl 在 FLASH 中的 LMA */

    . = ORIGIN(FLASH);
    . = ALIGN(align_num);
    .text : {
        . = ALIGN(align_num);
        _text_start = .;
        *(.text)
        *(.text*)
        *(.rodata)
        *(.rodata.*)
        *(.srodata*)
        . = ALIGN(align_num);
        _text_end = .;
    } >SDRAM_CODE AT> FLASH

    _text_load_start = ALIGN(LOADADDR(.text),align_num);

    . = ORIGIN(SDRAM);
    .data : {
        . = ALIGN(align_num);
        _data_start = .;
        *(.data)
        *(.data*)
        *(.sdata)
        *(.sdata*)
        . = ALIGN(align_num);

        _data_end = .;
    } > SDRAM AT> FLASH

    /* 数据段在FLASH中的起始地址（LMA） */
    _data_load_start = ALIGN(LOADADDR(.data),align_num);

    .bss : {
        _bss_start = .;
        *(.bss)
        *(.bss.*)
        *(COMMON)               /* 未初始化的公共变量 */
        . = ALIGN(8);
        _bss_end = .;
    } > SDRAM

    . = ORIGIN(SDRAM) + LENGTH(SDRAM);  /* 指向SDRAM末尾（栈顶） */
    . = ALIGN(0x1000);
    _stack_top = .;                     /* 栈顶（高地址） */
    . = . - 0x1000;                    /* 向下分配4KB栈空间 */
    _stack_bottom = .;                  /* 栈底（低地址） */
    _stack_pointer = _stack_top;        /* 栈指针初始指向栈顶 */

    /* 堆的分配*/
    _heap_end = _stack_bottom;
    . = _heap_end - 0x80000;
    . = ALIGN(0x1000);
    _heap_start = .;
    end = .;
    _end = .;

    /* 内存区域标记 */
    _pmem_start = ORIGIN(SDRAM);
    _pmem_end = _heap_end;
}
