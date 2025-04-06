#include "main.h"

/**
 * clear_bit -  bit to 0
 *
 * @n: int
 *
 * @index: int
 *
 * Return: 1 or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = 1 << index;

		if (index < sizeof(n) * 8)
		{
			*n = (*n & ~i);
			return (1);
		}

		return (-1);
}
