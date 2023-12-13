#include "main.h"

/**
 * print_binary - converts to binary
 * @c: argument
 * Return: integer
 */

int print_binary(va_list c)
{
	int f = 0;
	int ct = 0;
	int i, a = 1, b;
	unsigned int num = va_arg(c, unsigned int);
	unsigned int p;

	for (i = 0; i < 32; i++)
	{
		p = ((a << (32 - i)) & num);
		if (p >> (31 - i))
			f = i;
		if (f)
		{
			b = p >> (31 - i);
			_putchar(b + 48);
			count++;
		}
	}
	if (ct == 0)
	{
		ct++;
		_putchar('0');
	}
	return (ct);
}
