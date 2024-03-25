#include <stdio.h>
#include <stdarg.h>
#include "main.h"

void _print_integer(va_list args)
{
	_putchar(va_arg(args, int) + '0');
}
