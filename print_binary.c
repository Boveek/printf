#include"main.h"
/**
 * print_bin - a function that converts an int to binary digits
 * @n: the integer to be converted
 * Return: the number of char printed.
 */
int print_bin(va_list n)
{
	char ch[64];
	unsigned int val, temporary;
	int count = 0;
	int i, k = 0;

	val = va_arg(n, unsigned int);
	if (val == 0)
		count += write(1, "0", 1);
	temporary = val;
	while (temporary != 0)
	{
		temporary /= 2;
		k++;
	}
	i = k - 1;
	while (i >= 0)
	{
		ch[i] = (val % 2) + '0';
		val /= 2;
		i--;
	}
	count += write(1, ch, k);
	return (count);
}
