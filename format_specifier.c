#include "main.h"
/**
 * format_specifier - function that checks the format specifier used
 * @format: Input string
 * Return: An Integer on success
 */
int (*format_specifier(const char *format))(va_list)
{
	int i;

	func_t my_array[15] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_percent},
		{"d", print_int},
		{"i", print_inti},
		{"o", print_into},
		{"u", print_intu},
		{"x", print_intx},
		{"X", print_intX},
		{"b", print_bin},
		{"r", print_rev},
		{"R", print_rot13},
		{"p", print_intp},
		{"S", print_S},
		{NULL, NULL}};

	for (i = 0; my_array[i].t != NULL; i++)
	{
		if (*format == *(my_array[i].t))
			return (my_array[i].f);
	}
	return (NULL);
}
