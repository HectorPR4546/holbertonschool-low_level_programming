#include "main.h"
/**
 * _isalpha - entry point
 *@c: variable given
 * Return: 0 or 1 (success)
 */
int _isalpha(int c)
{
	if (((c >= 'A') && (c <= 'Z')) || ((c >= 'a') && (c <= 'z')))
		return (1);
	return (0);
}
