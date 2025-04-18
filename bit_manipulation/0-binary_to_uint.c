#include "main.h"

/**
 * binary_to_uint - Converts binary
 *
 * @b: chars
 *
 * Return: Converted num
 */

unsigned int binary_to_uint(const char *b)
{
	signed int index = 0, num = 0;


	if (!b)
		return (0);

	while (b[index] != '\0')
	{
		if (b[index] != '0' && b[index] != '1')
		{
			return (0);
		}

		num <<= 1;

		if (b[index] & 1)
		{
			num += 1;
		}
		index += 1;
	}
	return (num);
}
