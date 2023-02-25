.section .text.kstart
.global _start

_start:
    /* Setup stack space */
    ldr r0, =stack_start
    mov sp, r0

    /* Start kernel */
    bl kernel_entry
    b .