#include "main.h"
#include <stdarg.h>

/**
 * _printf - ...
 * @format: String to print and to formated
 * Return: (int)
 */
int _printf(const char *format, ...)
{
	int i = 0, ii, inc;
	char c1, c2;
	va_list args;

	format_t ftypes[] = {
		{"c", _print_char},
		{"s", _print_string},
		{"i", _print_integer},
		{"d", _print_integer},
		{"%", _print_perc},
		{NULL, NULL}
	}
	
	va_start(args);
	while (format[i] != '\0')
	{
		c1 = format[i];
		inc = 1;

		if (c1 == '%')
		{
			inc = 2;
			c2 = format[i + 1];

			for (ii = 0; ii < 5; ii++)
			{
				if (ftypes[ii].op == c2)
				{
					ftypes[ii].f(args);
				}
			}
		}

		i += inc;
	}
	va_end(args);
	_putchar('\n');
	return (0);  // TODO: Create variable int related
}
