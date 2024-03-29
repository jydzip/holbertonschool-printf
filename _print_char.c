#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * _print_char - print a character
 * @args: arguments of the function
 * Return: 1
 */

int _print_char(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}
