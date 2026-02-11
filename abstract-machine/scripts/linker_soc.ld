ENTRY(_start)
MEMORY{
    MROM : ORIGIN = 0x20000000, LENGTH = 0xfff
    SRAM : ORIGIN = 0x0f000000, LENGTH = 0x2000
}
SECTIONS {
    .text : {  # 代码段
        *(entry)
        KEEP(*(.text.start))
        *(.text.*)                    /* 所有 .text 相关段 */
        . = ALIGN(4);                 /* 4字节对齐 */
    } > MROM  # 放到ROM区域

    .data : {  # 数据段
        . = ALIGN(4);                 /* 4字节对齐 */
        *(.data)  # 所有目标文件的.data段
    } > SRAM

    .bss : {  # 未初始化数据段
        *(.bss)  # 所有目标文件的.bss段
    } > SRAM
    /* 栈区域：在SRAM顶部，向下生长 */
    .stack : {
        _stack_bottom = .;                /* 栈底地址（当前位置） */
        . = . + 0x800;                    /* 分配2KB栈空间 */
        . = ALIGN(0x20);                  /* 32字节对齐 */
        _stack_top = .;                   /* 栈顶地址 */
    } > SRAM
    /* 栈指针定义 */
    _stack_pointer = _stack_top;          /* 栈指针指向栈顶 */
    
    /* 确保栈不会超出SRAM边界 */
    ASSERT(_stack_top <= ORIGIN(SRAM) + LENGTH(SRAM), "Stack overflow: stack top exceeds SRAM boundary")

}