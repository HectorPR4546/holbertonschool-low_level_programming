#include "main.h"
#include <stddef.h>
/**
 * _strchr - entry point
 * @s: variable
 * @c: variable
 * Return: 0 (success)
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		 if (*s == c)
		 {
			 return (s);
		 }
		 else
		 {
			 s++;
		 }
	}
	if (*s == c)
		return (s);
	else
		return (0);
}
