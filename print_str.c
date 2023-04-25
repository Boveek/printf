#include "main.h"
/**
 * print_str - function that prints a string
 * @args: Argument input
 * Return: Number of integer printed
 */
int print_str(va_list args)
{
	char *c;
	int count = 0;

	c = va_arg(args, char*);
	if (c == NULL)
		return (0);
	if (c)
	{
		while (*c != '\0')
		{
			count += write(1, c, 1);
			c++;
		}
	}
	return (count);
}
