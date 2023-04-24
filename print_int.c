#include "main.h"
/**
 * print_int - function that prints an integer
 * @args: Argument input
 * Return: On success returns number of character printed
 */
int print_int(va_list args)
{
	int i;
	int count = 0;
	int num = 0;
	char convert[11];
	int temporary;
	int k = va_arg(args, int);

	if (k == 0)
		count += write(1, "0", 1);
	if (k < 0)
	{
		count += write(1, "-", 1);
		k = -k;
	}
	temporary = k;
	while (temporary != 0)
	{
		num++;
		temporary /= 10;
	}
	i = (num - 1);
	while (i >= 0)
	{
		convert[i] = (k % 10) + '0';
		k = k / 10;
		i--;
	}
	count += write(1, convert, num);
	return (count);
}
