#include <stdarg.h>
#include <limits.h>
#include "main.h"

/**
 * _print_integer - print integers
 * @args: arguments of the function
 * Return: length characters printed
 */

int _print_integer(va_list args)
{
	int count = 0;
	int nb = va_arg(args, int), i, j;
	char buffer[64];
	unsigned int n;

	if (!nb)
	{
		_putchar('0');
		return (1);
	}
	if (nb < 0)
	{
		_putchar('-');
		n = -nb;
		count++;
	}
	else
	{
		n = nb;
	}

	i = 0;
	while (n != 0)
	{
		buffer[i++] = (n % 10) + '0';
		n /= 10;
	}

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(buffer[j]);
		count++;
	}
	return (count);
}
