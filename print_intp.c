#include "main.h"
/**
 * print_intp - function that prints an hexadeximal num
 * @args: Argument input
 * Return: Returns number of characters printed on success
 */
int print_intp(va_list args)
{
	uintptr_t k = va_arg(args, uintptr_t);
	unsigned int n, i;
	unsigned int num[6] = {10, 11, 12, 13, 14, 15};
	char alp[6] = "abcdef";
	char convert[sizeof(uintptr_t) * 2 + 1];
	int p, count = 0;

	memset(convert, 0, sizeof(convert));
	if (k == 0)
		count += write(1, "0", 1);
	i = (sizeof(uintptr_t) * 2 - 3);
	while (i > 0)
	{
		n = k % 16;
		k /= 16;
		if (n > 9)
		{
			for (p = 0; p < 6; p++)
			{
				if (num[p] == n)
				{
					convert[i] = alp[p];
					break;
				}
			}
		}
		else
			convert[i] = n + '0';
		i--;
	}
	convert[0] = '0';
	convert[1] = 'x';
	i = 2;
	while (convert[i] == '0')
	{
		convert[i] = '\0';
		i++;
	}
	count += write(1, convert, sizeof(uintptr_t) * 2 + 1);
	return (count);
}
