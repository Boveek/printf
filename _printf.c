#include "main.h"
#include <stdarg.h>
/**
 * _printf - function that works the same way as printf in standard library
 * @format: String pointer input
 * Return: On success returns the number of characters printed
 */
int _printf(const char *format, ...)
{
	int i = 0, int num = 0, int val = 0;
	va_list args;
	int (*f)(va_list);

	va_start(args, format);
	if (format == NULL)
		return (-1);
	while (format[i])
	{
		if (format[i] == '%')
		{
			f = format_specifier(&format[i + 1]);
			if (f != NULL)
			{
				val = f(args);
				num = num + val;
				i = i + 2;
				continue;
			}
			if (format[i + 1] == '\0')
			{
				break;
			}
			if (format[i + 1] != '\0')
			{
				val = write(1, &format[i + 1], 1);
				num = num + val;
				i = i + 2;
				continue;
			}
			i++;
		}
		else if (format[i] != '%')
		{
			val = write(1, &format[i], 1);
			num = num + val;
		}
		i++;
	}
	return (num);
}
