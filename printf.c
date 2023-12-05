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
	va_list lp;
	va_start(lp, format);

	int s = 0;
	int i;
	for (i =0; i <  format; i++)
	{
		int x = va_arg(args, int);
		s += x;
	}
	va_end(lp);
	return (0);
}
