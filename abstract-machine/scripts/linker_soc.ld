ENTRY(_start)
MEMORY{
    MROM : ORIGIN = 0x20000000, LENGTH = 4K
    SRAM : ORIGIN = 0x0f000000, LENGTH = 8K
    FLASH : ORIGIN = 0x30000000, LENGTH = 0x01000000
    PSRAM : ORIGIN = 0x80000000, LENGTH = 0x01000000
}

SECTIONS {
    . = ORIGIN(FLASH);
    .text : {
        _text_start = .;
        *(entry)
        *(.text*)                    /* 所有 .text 相关段 */
        . = ALIGN(4);                 /* 4字节对齐 */
        _text_end = .;
    } > FLASH

    _main_address = main;


    .rodata : { 
        _rodata_start = .;
        *(.rodata)
        *(.rodata.*)
        . = ALIGN(4);
        _rodata_end = .;
    } > FLASH

    . = ORIGIN(PSRAM);
    .data : {
        _data_start = .;              
        *(.data)
        *(.data*)
        *(.sdata)
        *(.sdata*)
        _data_end = .;              
    } > PSRAM AT> FLASH
    /* > 为运行的时候的位置 AT>MROM 就是代表烧录的时候的位置 */
    /* 数据段在MROM中的起始地址（LMA） */
    _data_load_start = LOADADDR(.data);

    .bss : {
        _bss_start = .; 
        *(.bss)
        *(.bss.*)
        *(COMMON)               /* 未初始化的公共变量 */
        _bss_end = .;
    } > PSRAM
    
    . = ORIGIN(PSRAM) + LENGTH(PSRAM);  /* 指向SRAM末尾（栈顶） */
    _stack_top = .;                   /* 栈顶（高地址） */
    . = . - 0x10000;                    /* 向下分配2KB栈空间 */
    . = ALIGN(0x1000);
    _stack_bottom = .;                /* 栈底（低地址） */
    _stack_pointer = _stack_top;      /* 栈指针初始指向栈顶 */

    /* 堆的分配*/
    _heap_end = _stack_bottom;        
    . = _heap_end - 0x800000;        
    . = ALIGN(0x1000);                
    _heap_start = .;                 
    end = .;
    _end = .; 

    /* 内存区域标记 */
    _pmem_start = ORIGIN(SRAM);
    _pmem_end = _heap_end; 
}
