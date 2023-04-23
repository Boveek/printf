#include "main.h"
/**
 * print_percent - function that writes % to standard output
 * @args: Argument input
 * Return: On success number of element printed
 */
int print_percent(va_list args __attribute__((unused)))
{
	int count = 0;

	count = write(1, "%", 1);
	return (count);
}
