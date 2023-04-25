#include "main.h"

/**
 * print_rot13 - a function thats encode strings in Rot13
 * @format: the string to be encoded
 *
 * Return: the count of string printed
 */
int print_rot13(va_list format)
{
	char *ch;
	char rec[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char ret[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int cnt, i = 0, val = 0;

	ch = va_arg(format, char *);

	if (ch == NULL)
		return (0);
	while (ch[i] != '\0')
	{
		for (cnt = 0; rec[cnt] != '\0'; cnt++)
		{
			if (ch[i] == rec[cnt])
			{
				val += write(1, &ret[cnt], 1);
				break;
			}
		}
		if (rec[cnt + 1] == '\0')
 		{
 			val += write(1, &ch[i], 1);
 		}
 		i++;
	}
	return (val);
}
