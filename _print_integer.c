#include <stdarg.h>
#include "main.h"

/**
 * _print_integer - print integers
 * @args: arguments of the function
 * Return: count
 */

int _print_integer(va_list args)
{
	int nb = va_arg(args, int), count = 0, length = 0, temp, i, j;

	if (nb == 0)
	{
		_putchar('0');
		count++;
		return (count);
	}
	if (nb < 0)
	{
		_putchar('-');
		nb = -nb;
		count++;
	}
	temp = nb;
	while (temp != 0)
	{
		temp /= 10;
		length++;
	}
	if (length == 0)
	{
		_putchar('0');
		count++;
	}
	else
	{
		for (i = 1; i <= length; i++)
		{
			int divisor = 1;

			for (j = 1; j < length - i + 1; j++)
			{
				divisor *= 10;
			}
			_putchar(((nb / divisor) % 10) + '0');
			count++;
		}
	}
	return (count);
}
