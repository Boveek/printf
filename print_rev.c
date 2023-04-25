#include "main.h"

/**
 * print_rev - funtion that prints strings in reverse
 * @str: the string argument to be converted
 * Return: the count of char printed
 */
int print_rev(va_list str)
{
	char *ch;
	int res = 0, c, i = 0;

	ch = va_arg(str, char *);

	if (ch == NULL)
		return(0);
	if (ch)
	{
		while (ch[i] != '\0')
		{
			i++;
		}

		for (c = i - 1; c >= 0; c--)
		{
			res += write(1, &ch[c], 1);
		}
	}

	return (res);
}
