#ifndef ARCH_H
#define ARCH_H

#include <stdint.h>

#define STACK_SIZE 65536 /* 64KB per task */
#define TASK_LIMIT 10
#define PIPE_BUF 512
#define MAX_PATH 256
#define PIPE_LIMIT (TASK_LIMIT*5)

#define PATHSRV_FD (TASK_LIMIT+3)

#define TASK_READY 0
#define TASK_WAIT_READ 1
#define TASK_WAIT_WRITE 2
#define TASK_WAIT_INTR 3

#endif