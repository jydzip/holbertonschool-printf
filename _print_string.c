#include <stdarg.h>
#include "main.h"

/**
 * _print_string - print a string of characters
 * @args: char
 * Return: count
 */

int _print_string(va_list args)
{
	int count = 0;
	char *str = va_arg(args, char *);

	while (*str != 0)
	{
		_putchar(*str);
		str++;
		count++;
	}
	return (count);
}
