#include "main.h"

/**
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
}
