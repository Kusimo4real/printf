#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stddef.h>
#include <string.h>

typedef struct 
{
	char type;
	int (*f)(va_list);
} spec;

int _printf(const char *format, ...);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_space(va_list args);
int print_unsigned(va_list args);
int print_octal(va_list args);
int print_hexadecimal(va_list args);
int print_hexadecimal_upper(va_list args);
int print_nonprintable(va_list args);
int print_int(va_list args);
int print_binary(va_list args);

int _putchar(char c);

#endif

