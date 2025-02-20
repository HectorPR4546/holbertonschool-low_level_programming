#include "main.h"
/**
 * _islower - entrypoint
 *
 * @c: variable given.
 *
 * Return: 0 (success)
 */

int _islower(int c)
{

	if (c == 1 || c <= 127)
	{
		return (1);
		c++;
	}
	else
	return (0);
}
