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

	if (c <= 122 || c <= 90 || c <= 57)
	{
		return (1);
	}
	else
	return (0);
}
