#ifndef TIMER_H
#define TIMER_H

#define TIMER0         ((volatile unsigned int*)0x101E2000)
#define TIMER_VALUE    0x1 /* 0x04 bytes */
#define TIMER_CONTROL  0x2 /* 0x08 bytes */
#define TIMER_INTCLR   0x3 /* 0x0C bytes */
#define TIMER_MIS      0x5 /* 0x14 bytes */

#define TIMER_EN       0x80
#define TIMER_PERIODIC 0x40
#define TIMER_INTEN    0x20
#define TIMER_32BIT    0x02
#define TIMER_ONESHOT  0x01

#define PIC           ((volatile unsigned int*)0x10140000)
#define PIC_TIMER01   0x10
#define PIC_UART0     0x1000

#define VIC_INTENABLE  0x4 /* 0x10 bytes */
#define VIC_INTENCLEAR 0x5 /* 0x14 bytes */


#endif