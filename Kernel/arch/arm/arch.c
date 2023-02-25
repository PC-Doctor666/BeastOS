#include <stdint.h>
#include <arch/arch.h>


static uint32_t stacks[TASK_LIMIT][STACK_SIZE];
static uint32_t *tasks[TASK_LIMIT];

static uint32_t task_count = 0;
static uint32_t current_task = 0;

