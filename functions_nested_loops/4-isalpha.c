#include "main.h"
/**
 * _isalpha - entry point
 *@c: variable given
 * Return: 0 or 1 (success)
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		if (c >= 'A' && c <= 'Z')
		{
			return (1);
		}
		return (1);
	}
	else
		return (0);
}
