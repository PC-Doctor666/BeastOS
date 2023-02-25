#include <stdint.h>
#include <devices/uart.h>

static volatile unsigned int * const uart0 = (unsigned int *)UART0;


void uart_putc(char c) {
    *uart0 = c;
}

void uart_puts(char *s) {
    while(*s) {
        uart_putc(*s);
        s++;
    }
}