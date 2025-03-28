#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - a pointer raturned to a new string
 * @str: duplicate
 * Return: NULL if str is NULL
 */
char *_strdup(char *str)
{
	char *a;
	int i, c;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		continue;

	a = malloc(i * sizeof(*a) + 1);
	if (a == NULL)
		return (NULL);

	for (c = 0; c < i; c++)
		a[c] = str[c];
	a[c] = '\0';

	return (a);
}
