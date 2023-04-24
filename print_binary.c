#include"main.h"

/**
 * print_bin - a function that converts an int to binary digits
 * @n: the integer to be converted
 *
 * Return: the number of char printed.
 */
int print_bin(va_list n)
{
	char ch[32];
	unsigned int i, val;
	unsigned int count = 0;
	int g;

	val = va_arg(n, unsigned int);
	if (val)

	{
	for (i = 0; val > 0; i++)
	{
		ch[i] = (val % 2) + '0';
		val = val / 2;
	}

	for (g = i; g >= 0; g--)
	{
		count = write(1, &ch[g], 1);
		count += count;
	}
	}
return (count);
}
