#ifndef __SHELL_H__
#define __SHELL_H__

#include "uart.h"
#include "mbox.h"
#include "stddef.h"
#include "cpio.h"
#include "dtb.h"

#define PM_PASSWORD 0x5a000000
#define PM_RSTC 0x3F10001c
#define PM_WDOG 0x3F100024

char cmd_buf[255];

void set(long addr, unsigned int value);
void reset(int tick);
void cancel_reset();

#endif