#include "main.h"
#include <string.h>
/**
 * _strlen - entry point
 * @s: variable
 * Return: 0 (success)
 */
int _strlen(char *s)
{
	int h = 0;

	while (s[h] != '\0')
		h++;
	return (h);
}
