#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - entry point
 * @s: variable
 * @accept: variable
 * Return: 0 (success)
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
