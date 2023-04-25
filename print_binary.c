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
	int i, val;
	int count = 0;
	int g, r, k = 0;
	char *ch_out;

	val = va_arg(n, int);
	if (val)
	{
	for (i = 0; val > 0; i++)
	{
		ch[i] = (val % 2) + '0';
		val = val / 2;
	}

	ch_out = malloc(i + 1);

	if (ch_out)
	{
		ch_out[i + 1] = '\0';
		while (*ch_out)
		{
			ch_out[k] = '0';
			k++;
		}
		r = 0;
		for (g = i; g >= 0; g--, r++)
		{
			ch_out[r] = ch[g];
		}

	}
		count = write(1, ch_out, i + 1);
		count += count;
	}
return (count);
}
