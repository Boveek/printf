#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

int _printf(const char *format, ...);
int (*format_specifier(const char *format))(va_list);
int print_char(va_list args);
void print_buffer(int *n);

/**
 * struct func - typedef struct.
 *
 * @t: the charrater pointer
 * @f: the function pointer
 */
typedef struct func
{
	char *t;
	int (*f)(va_list);
} func_t;
int print_S(va_list res);
int print_intX(va_list);
int print_intx(va_list);
int print_into(va_list);
int print_intu(va_list);
int print_rev(va_list str);
int print_rot13(va_list format);
int print_str(va_list);
int print_percent(va_list);
int print_int(va_list args);
int print_inti(va_list args);
int print_bin(va_list n);
int print_intp(va_list);
#endif
