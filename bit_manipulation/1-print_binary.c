#include "main.h"

/**
 * print_binary - Prints binary
 *
 * @n: int
 *
 * Return: number
 */

void print_binary(unsigned long int n)
{

	if (n > 1)
	{
	print_binary(n >> 1);
	}

	if (n & 1)
	{
		_putchar('1');
	}
	else
	{
		_putchar('0');
	}
}
