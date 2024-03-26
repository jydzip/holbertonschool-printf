#include <stdarg.h>
#include "main.h"

/**
 * _print_integer - print integers
 * @args: arguments of the function
 * Return: count
 */

int _print_integer(va_list args)
{
	int nb = va_arg(args, int);
	int count = __print_integer(nb, 0);
	return (count);

}

/**
 * __print_integer - recursion of the first function
 *@nb: number
 *@count: number to count
 *Return: count
 */

int __print_integer(int nb, int count)
{
	if (nb <= 0)
		return (count);
	count = __print_integer(nb / 10, count + 1);
	_putchar((nb % 10) + '0');
	return (count);
}
