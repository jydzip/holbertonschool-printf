#include <stdarg.h>
#include "main.h"

int _print_binary(va_list args)
{
	unsigned int n = va_arg(args, unsigned int); 
	int binary[32];
	int i = 0;
	int count = 0;

	if (n <= 1)
	{
		_putchar(n + '0');
		count++;
	}
	else
	{
		while (n > 0)
		{
			binary[i] = n % 2;
			n = n / 2;
			i++;
		}
		for (i = i - 1; i >= 0; i--)
		{
			_putchar(binary[i] + '0');
			count++;
		}
	}
	return (count);
}
