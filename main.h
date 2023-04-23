#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int (*format_specifier(const char *format))(va_list);
int print_char(va_list args);

typedef struct func
{
	char *t;
	int (*f)(va_list);
}func_t;

int print_str(va_list);
int print_percent(va_list);
int print_int(va_list args);
int print_inti(va_list args);
#endif
