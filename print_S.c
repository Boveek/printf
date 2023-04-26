#include "main.h"

/**
 * print_S - function that prints the hexadecimal of
 * a non-printable character.
 * @res: a valist variable type argument that contains string
 *
 * Return: the number of character printed
 */
int print_S(va_list res)
{
	char *ch;
	unsigned int num[6] = {10, 11, 12, 13, 14, 15};
	char alph[6] = "ABCDEF", hexa[2], hex[2] = "/x";
	unsigned int i = 0, d, count = 0, k, temp;

	ch = va_arg(res, char *);
	if (ch == NULL)
		return (0);
	while (ch[i] != '\0')
	{
		if ((ch[i] >= 0 && ch[i] < 32) || (ch[i] >= 127))
		{
			count += write(1, hex, 2);
			temp = ch[i];
			while (temp != 0)
			{
				temp /= 16;
				d = ch[i] % 16;
				if (d > 9)
				{
					for (k = 0; k < 6; k++)
					{
					if (num[k] == d)
					{
						hexa[1] = alph[k];
						break;
					}
					}
				}
				hexa[0] = (ch[i] / 16) + '0';
				count += write(1, hexa, 2);
			}
			i++;
			continue;
		}
		else
			count += write(1, &ch[i], 1);
	i++;
	}
	return (count);
}
