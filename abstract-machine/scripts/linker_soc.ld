ENTRY(_start)
MEMORY{

    MROM  : ORIGIN = 0x20000000, LENGTH = 4K
    SRAM  : ORIGIN = 0x0f000000, LENGTH = 8K
    FLASH : ORIGIN = 0x30000000, LENGTH = 0x0100000
    /* PSRAM : ORIGIN = 0x80000000, LENGTH = 0x0100000 */
    SDRAM : ORIGIN = SDRAM_BASE, LENGTH = 0x200000
    SDRAM_CODE : ORIGIN = SDRAM_BASE + LENGTH(SDRAM), LENGTH = 0x200000
}

SECTIONS {

    . = ORIGIN(FLASH);
    .boot :
    {
        KEEP(*(entry))
    } > FLASH
    . = ORIGIN(SDRAM_CODE);
    . = ALIGN(8);
    .text : {
        . = ALIGN(8);  
        _text_start = .;
        *(.text)
        *(.text*)
        *(.rodata)
        *(.rodata.*)
        *(.srodata*)
        . = ALIGN(8);
        _text_end = .;
    } >SDRAM_CODE AT> FLASH

    _text_load_start = ALIGN(LOADADDR(.text),8);

    . = ORIGIN(SDRAM);
    .data : {
        . = ALIGN(8);
        _data_start = .;
        *(.data)
        *(.data*)
        *(.sdata)
        *(.sdata*)
        . = ALIGN(8);
        _data_end = .;
    } > SDRAM AT> FLASH

    /* 数据段在MROM中的起始地址（LMA） */
    _data_load_start = ALIGN(LOADADDR(.data),8);

    .bss : {
        *(.bss)
        *(.bss.*)
        *(COMMON)               /* 未初始化的公共变量 */
    } > SDRAM
    
    . = ORIGIN(SDRAM) + LENGTH(SDRAM);  /* 指向SRAM末尾（栈顶） */
    . = ALIGN(0x1000);
    _stack_top = .;                     /* 栈顶（高地址） */
    . = . - 0x1000;                    /* 向下分配2KB栈空间 */
    . = ALIGN(8);
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
