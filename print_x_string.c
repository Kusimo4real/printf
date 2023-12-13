#include "main.h"

/**
 * print_x_string(va_list val
 * @c: value
 *
 * Return: number of character to be printed
 */

int print_x_string(va_list c)
{
	char *s;
	int i, len = 0;
	int value;

	s = va_arg(c, char *);
	if (s == NULL)
		s = "(null)';
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < 32 || s[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			len = len + 2;
			value = s[i];
			if (va;ue < 16)
			{
				_putchar('0');
				len++;
			}
			len = len + print_HEX_extra(value);
		
		}
		else
		{
			_putchar(s[i]);
			len++;
		}
	}
	return (len);
}
