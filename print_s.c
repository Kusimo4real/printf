#include "main.h"

/**
 * print_string - prints a string
 * @lp: a variable argument list containing a string to be printed
 * @count: count number character
 *
 * Return: Nothing
 */

int print_string(va_list c)
{
	char *str;
	int i;
	int length;

	str = va_arg(c, char *);
	if (str == NULL)
	{
		str = "(null)";
		length = _strlen(str);
		for (i = 0; i < length; i++)
			_putchar(str[i]);
		return (length);
	}
	else
	{
		length = _strlen(str);
		for (i = 0; i < length; i++)
			_putchar(str[i]);
		return (length);
	}
}
