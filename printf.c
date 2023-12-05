#include "main.h"

/**
  * _printf - display text to stdout
  * @format: string/text format
  * Return: number of characters printed
*/
int _printf(const char *format, ...)
{
	spec specs[] = {
		{'c', print_char}, {'s', print_string},
		{'%', print_percent}, {'d', print_int},
		{'i', print_int}, {'b', print_binary},
		{' ', print_space}, {'u', print_unsigned},
		{'o', print_octal}, {'x', print_hexadecimal},
		{'X', print_hexadecimal_upper}, {'\0', print_space},
		{'S', print_nonprintable},
	};
	int i, size, count = 0;
	va_list args;

	va_start(args, format);
	size = sizeof(specs) / sizeof(specs[0]);
	while (*format)
	{
		if (*format != '%')
		{
			count += _putchar(*format);
			format++;
			continue;
		}
		format++;

		for (i = 0; i < size; i++)
		{
			if (specs[i].type == *format)
			{
				count += specs[i].f(args);
				break;
			}
		}
		format++;
	}
	va_end(args);
	return (count);
}
