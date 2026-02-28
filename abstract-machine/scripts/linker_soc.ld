ENTRY(_start)
MEMORY{
    MROM  : ORIGIN = 0x20000000, LENGTH = 4K
    SRAM  : ORIGIN = 0x0f000000, LENGTH = 8K
    FLASH : ORIGIN = 0x30000000, LENGTH = 0x0100000
    PSRAM : ORIGIN = 0x80000000, LENGTH = 0x0100000
    SDRAM : ORIGIN = 0xA0000000, LENGTH = 0x200000
    SDRAM_CODE : ORIGIN = 0xA0000000+LENGTH(SDRAM), LENGTH = 0x200000
}

SECTIONS {
    . = ORIGIN(FLASH);
    .boot :
    {
        KEEP(*(entry))  /* 保留启动代码，不被优化 */
    } > FLASH
    . = ORIGIN(FLASH);
    .text : {
        . = ALIGN(4);  
        _text_start = .;
        *(.text)
        *(.text*)                    /* 所有 .text 相关段 */
        *(.rodata)
        *(.rodata.*)
        *(.srodata*)
        . = ALIGN(4);                 /* 4字节对齐 */
        _text_end = .;
    } >FLASH


    _text_load_start = LOADADDR(.text);

    . = ORIGIN(SDRAM);
    .data : {
        . = ALIGN(4);
        _data_start = .;
        *(.data)
        *(.data*)
        *(.sdata)
        *(.sdata*)
        _data_end = .;
    } > SDRAM AT> FLASH
    
    /* > 为运行的时候的位置 AT>MROM 就是代表烧录的时候的位置 */
    /* 数据段在MROM中的起始地址（LMA） */
    _data_load_start = LOADADDR(.data);

    .bss : {
        *(.bss)
        *(.bss.*)
        *(COMMON)               /* 未初始化的公共变量 */
    } > SDRAM
    
    . = ORIGIN(SDRAM) + LENGTH(SDRAM);  /* 指向SRAM末尾（栈顶） */
    _stack_top = .;                   /* 栈顶（高地址） */
    . = . - 0x10000;                    /* 向下分配2KB栈空间 */
    . = ALIGN(0x1000);
    _stack_bottom = .;                /* 栈底（低地址） */
    _stack_pointer = _stack_top;      /* 栈指针初始指向栈顶 */

    /* 堆的分配*/
    _heap_end = _stack_bottom;
    . = _heap_end - 0x8000;
    . = ALIGN(0x1000);
    _heap_start = .;
    end = .;
    _end = .;

    /* 内存区域标记 */
    _pmem_start = ORIGIN(SDRAM);
    _pmem_end = _heap_end;
}
