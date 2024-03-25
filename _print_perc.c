#include <stdio.h>
#include <stdarg.h>
#include "main.h"

void _print_perc(va_list args)
{
	(void)args;
	_putchar('%');
}
