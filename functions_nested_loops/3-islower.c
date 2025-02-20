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

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	return (0);
}
