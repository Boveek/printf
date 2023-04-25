#include "main.h"

/**
 * print_buffer - function thats print buffer
 * @n: a pointer to the index to be printed
 *
 * Return: void
 */
void print_buffer(int *n)
{
	char buf[1024];

	if (*n > 0)
	{
		write(1, &buf, *n);
	}

	*n = 0;
}
