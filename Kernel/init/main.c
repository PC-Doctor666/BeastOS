#include <stdint.h>
#include <arch/arch.h>
#include <devices/uart.h>


int main(void) {
    /* Load and start userspace application */

    uart_puts("Starting application...\n");
    while(1);
}

int kernel_entry(void) {
    /* Kernel early init */

    /* Start main */
    main();
    while(1);
}