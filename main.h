#ifndef HEADER_H
#define HEADER_H
#include <stdarg.h>

/**
 * struct format_types - Struct format
 * @op: Character to recognize the format
 * @f: Function to execute print
 */
typedef struct format_types
{
	char *op;
	int (*f)(va_list args);
} format_t;

int _putchar(char c);
int _printf(const char *format, ...);
int (*get_format_function(char c2))(va_list);

int _print_char(va_list args);
int _print_integer(va_list args);
int _print_string(va_list args);
int _print_perc(va_list args);
int _print_unsigned_integer(va_list args);
int __print_unsigned_integer(unsigned int nb, int count);
int _print_binary(va_list args);
#endif
