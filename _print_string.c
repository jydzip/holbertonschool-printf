#include <stdio.h>
#include <stdarg.h>
#include "main.h"

void _print_string(va_list args)
{
	char *str = va_arg(args, char *);

	while (*str != 0)
	{
	_putchar (*str);
	str++;
	}
}
