ENTRY(_start)


MEMORY
{
    ram     (rwx) : ORIGIN = 0x00010000, LENGTH = 128M
}


SECTIONS
{
    __kstart = .;

    .text : {
        __stext = .;
        KEEP(*(.text.kstart))
        KEEP(*(.text.context))
        *(.text*)
        *(.rodata*)
        *(.gnu*)
        __etext = .;
    } > ram

    .data : {
        __sdata = .;
        *(.data*)
        __edata = .;
    } > ram

    .bss (NOLOAD) : {
        __sbss = .;
        *(COMMON)
        *(.bss*)
        __ebss = .;
    } > ram
    __kend = .;

    /* Initial stack space */
    . = ALIGN(8);
    . = . + 0x8000;
    stack_start = .;
}