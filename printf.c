#include "main.h"
#include <string.h>

/**
 * _printf - function that creates a custom printf
 * @format: the string specifier
 *
 * Return: 0
 */

int _printf(const char *format, ...)
{
	int chara_print = 0;

	va_list list_of_args;

	if (!format)
		return (-1);

	va_start(list_of_args, format);


	while (*format)
	{
		if (*format != '%')
			chara_print += write(1, format, 1);
		else if (*(++format) == '%')
			chara_print += write(1, format, 1);
		else if (*format == 'c')
		{
			int c = va_arg(list_of_args, int);

			chara_print += write(1, &c, 1);
		}
		else if (*format == 's')
		{
			char *str = va_arg(list_of_args, char *);

			chara_print += write(1, str, strlen(str));
		}
	}

	va_end(list_of_args);
	return (chara_print);
}
