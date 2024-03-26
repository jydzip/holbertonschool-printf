#include <stdarg.h>
#include "main.h"

/**
 * _print_unsigned_integer - print unsigned integers
 * @args: arguments of the function
 * Return: count
 */

int _print_unsigned_integer(va_list args)
{
	unsigned int nb = (int)va_arg(args, unsigned int);
	int count = 0;

	if (!nb)
	{
		_putchar('0');
		count++;
	}
	else
	{
		count += __print_unsigned_integer(nb, 0);
	}
	return (count);

}

/**
 * __print_unsigned_integer - recursion of the first function
 *@nb: number
 *@count: number to count
 *Return: count
 */

int __print_unsigned_integer(unsigned int nb, int count)
{
	if (nb <= 0)
		return (count);
	count = __print_unsigned_integer(nb / 10, count + 1);
	_putchar((nb % 10) + '0');
	return (count);
}
