#include <stdio.h>
#include <stdarg.h>
#include <string.h>

int _printf(const char *format, ...)
{
	va_list __one;
	va_start(__one, format);
}

int main()
{
	int ap, i = 0;

	for (i = 0; format[i]; ++i)
	{
		if (format[i] '%')
			++i;

		switch (format[i])
		{

		}
	}
}
