#include "main.h"
#include <string.h>

/**
 * print_string - prints a string
 * @lp: a variable argument list containing a string to be printed
 * @count: count number character
 *
 * Return: Nothing
 */

void print_string(va_list lp, int *count)
{
	char *str;

	str = va_arg(lp, char *);
	if (!str)
		_putchar('\0');
	while (*str)
	{
		*count += _putchar(*str);
		str++;
	}
}
