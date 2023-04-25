#include "main.h"
/**
 * print_into - function that prints an octal number
 * @args: argument input
 * Return: On success return count of numbers printed
 */
int print_into(va_list args)
{
	int i;
	int num = 0;
	unsigned int temporary = 0;
	unsigned int count = 0;
	char convert[11];
	unsigned int k = va_arg(args, unsigned int);

	if (k == 0)
		count += write(1, "0", 1);
	temporary = k;
	while (temporary != 0)
	{
		temporary /= 8;
		num++;
	}
	i = num - 1;
	while (i >= 0)
	{
		convert[i] = (k % 8) + '0';
		k /= 8;
		i--;
	}
	count += write(1, convert, num);
	return (count);
}
