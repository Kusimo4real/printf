#include "main.h"
#include <string.h>

/**
<<<<<<< HEAD
  * printf_char - display char
  * @c: character
  * Return: 1
*/

int printf_char(va_list c)
{
	char str;
	str = va_arg(c, int);
	_putchar(str);
	return(1);
=======
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
>>>>>>> a80ca58cf8e4c3e6c6e60b97da1b267ad4c86a9a
}
