#include "main.h"

/**
 * flip_bits - Number of bits needed
 *
 * @n: int
 *
 * @m: int
 *
 * Return: 1 or -1
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = 0, index;

	index = n ^ m;

	while (index > 0)
	{
		if (index & 1)
		{
			i++;
		}
		index >>= 1;
	}
	return (i);
}
