#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

typedef struct format
{
	char *id;
	int (*f)();
} spec;

int printf_char(va_list c);
int _putchar(char c);
int _printf(const char *format, ...);
int print_string(va_list c);
int _strlen(char *str);
int _strlenc(const char *str);
int print_37(void);

#endif

