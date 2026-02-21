ENTRY(_start)
MEMORY{
    MROM : ORIGIN = 0x20000000, LENGTH = 4K
    SRAM : ORIGIN = 0x0f000000, LENGTH = 8K
}

SECTIONS {
    . = ORIGIN(MROM);
    .text : {  # 代码段
        *(entry)
        *(.text*)                    /* 所有 .text 相关段 */
        . = ALIGN(4);                 /* 4字节对齐 */
    } > MROM
    .rodata : { 
        *(.rodata)
        *(.rodata.*)
        . = ALIGN(4);
    } > MROM

    . = ORIGIN(SRAM);
    .data : {
        _data_start = .;              
        *(.data)
        *(.data.*) 
        _data_end = .;              
    } > SRAM AT> MROM
    /* > 为运行的时候的位置 AT>MROM 就是代表烧录的时候的位置 */
    /* 数据段在MROM中的起始地址（LMA） */
    _data_load_start = LOADADDR(.data);

    .bss : {
        _bss_start = .; 
        *(.bss)
        *(.bss.*)
        *(COMMON)               /* 未初始化的公共变量 */
        _bss_end = .;
    } > SRAM
    
    . = ORIGIN(SRAM) + LENGTH(SRAM);  /* 指向SRAM末尾（栈顶） */
    _stack_top = .;                   /* 栈顶（高地址） */
    . = . - 0x800;                    /* 向下分配2KB栈空间 */
    . = ALIGN(0x20);
    _stack_bottom = .;                /* 栈底（低地址） */
    _stack_pointer = _stack_top;      /* 栈指针初始指向栈顶 */

}
