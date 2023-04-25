#include "main.h"
/**
 * print_int - function that prints an integer
 * @args: Argument input
 * Return: On success returns number of character printed
 */
int print_intu(va_list args)
{
	int i;
	int count = 0;
	unsigned int num = 0;
	char convert[11];
	unsigned int temporary;
	unsigned int k = va_arg(args, unsigned int);

	if (k == 0)
		count += write(1, "0", 1);
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
