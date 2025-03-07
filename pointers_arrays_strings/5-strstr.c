#include "main.h"
#include <stddef.h>
/**
 * _strstr - enry point
 * @haystack: variable
 * @needle: variable
 * Return: 0 (success)
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (*haystack == needle[i])
				return (needle);
		}
		haystack++;
	}
	return (NULL);
}
