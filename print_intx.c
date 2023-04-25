#include "main.h"
/**
 * print_intx - function that prints an hexadeximal num
 * @args: Argument input
 * Return: Returns number of characters printed on success
 */
int print_intx(va_list args)
{
	unsigned int k = va_arg(args, unsigned int), temporary, n;
	unsigned int num[6] = {10, 11, 12, 13, 14, 15};
	char alp[6] = "abcdef";
	char convert[11];
	int p, i, num1 = 0, count = 0;

	if (k == 0)
		count += write(1, "0", 1);
	temporary = k;
	while (temporary != 0)
	{
		temporary /= 16;
		num1++;
	}
	i = (num1 - 1);
	while (i >= 0)
	{
		n = k % 16;
		k /= 16;
		if (n > 9)
		{
			for (p = 0; p < 6; p++)
				if (num[p] == n)
					convert[i] = alp[p];
		}
		else
			convert[i] = n + '0';
		i--;
	}
	count += write(1, convert, num1);
	return (count);
}
