#include <stdio.h>
#include <stdarg.h>
#include "main.h"

int _print_perc(va_list args)
{
	(void)args;
	_putchar('%');
	return (1);
}
