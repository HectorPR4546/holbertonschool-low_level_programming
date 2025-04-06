#include "main.h"

/**
 * get_bit - Get value of a bit
 *
 * @n: int
 *
 * @index: index of the list
 *
 * Return: Bit index
 */


int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i = 1;

	if (index > sizeof(n) * 8)
	{
		return (-1);
	}

	i <<= index;

	if (i & n)
		return (1);
	else
		return (0);
}
