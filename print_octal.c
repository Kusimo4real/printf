#include "main.h"

/**
 * print_octal - converts to octal
 * @c: variable parameter
 *
 * Return: counter
 */

int print_octal(va_list c)
{
	int i, counter = 0;
	int *array;
	unsigned int num = va_arg(c, unsigned int);
	unsigned int tem = num;

	while (num / 8 != 0)
	{
		num = num / 8;
		counter++;
	}
	counter++;
	array = malloc(sizeof(int) * counter);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < counter; i++)
	{
		array[i] = tem % 8;
		tem = tem / 8;
	}
	for (i = counter - 1; i >= 0; i--)
		_putchar(array[i] + '0');
	free(array);
	return (counter);
}
