ENTRY(_start) /* 程序入口_start _start在汇编中定义*/
PHDRS { text PT_LOAD; data PT_LOAD; } /* 程序头定义 PT_LOAD 类型表示该段是可加载到内存中的段 */
/* 定义在内存中的布局 */
SECTIONS {
  /* _pmem_start and _entry_offset are defined in LDFLAGS  . 表示当前地址计数器*/
  . = _pmem_start + _entry_offset;
  .text : {
    *(entry)
    *(.text*)
  } : text
  etext = .;
  _etext = .;
  .rodata : {
    *(.rodata*)
  }
  .data : {
    *(.data*)
  } : data
  edata = .;
  _data = .;
  .bss : {
	_bss_start = .;
    *(.bss*)
    *(.sbss*)
    *(.scommon)
  }
  _stack_top = ALIGN(0x1000);
  . = _stack_top + 0x8000;
  _stack_pointer = .;
  end = .;
  _end = .;
  _heap_start = ALIGN(0x1000);
}
