#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * _print_perc - print a %
 * @args: args
 * Return: 1
 */

int _print_perc(va_list args)
{
	(void)args;
	_putchar('%');
	return (1);
}
