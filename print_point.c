#include "main.h"

/**
 * print_point - prints pointer
 * @c: value
 * Return: int
 */

int print_point(va_list c)
{
	void *p;
	char *s = "(null)";
	long int a;
	int i, b;

	p = va_arg(c, void *);
	if (p == NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
			_putchar(s[i]);
		return (i);
	}
	a = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	b = print_hex_extra(a);
	return (b + 2);
}
