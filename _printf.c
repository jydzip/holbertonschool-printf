#include "main.h"
#include <stdarg.h>
#include <stddef.h>

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
	};
	
	va_start(args, format);
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
				if (ftypes[ii].op[0] == c2)
				{
					ftypes[ii].f(args);
				}
			}
		}
		else
		{
			_putchar(c1);
		}

		i += inc;
	}
	va_end(args);
	return (0);
}
