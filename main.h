#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <limits.h>

typedef struct print_data
{
	char *x;
	int (*f)(va_list);
} print_d;


int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_dec(va_list args);
int (*get_func(const char *format))(va_list);


#endif
