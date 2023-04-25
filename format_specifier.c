#include "main.h"
/**
 * format_specifier - function that checks the format specifier used
 * @format: Input string
 * Return: An Integer
 */
int (*format_specifier(const char *format))(va_list)
{
	int i;

	func_t my_array[8] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_percent},
		{"d", print_int},
		{"i", print_inti},
		{"b", print_bin},
		{"R", print_rot13},
		{NULL, NULL}};

	for (i = 0; my_array[i].t != NULL; i++)
	{
		if (*format == *(my_array[i].t))
			return (my_array[i].f);
	}
	return (NULL);
}
