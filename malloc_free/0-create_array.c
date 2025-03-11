#include "main.h"
#include <stdlib.h>
/**
 * create_array - chars with especific
 * @size: size array
 * @c: especific char a
 * Return: char pointer to malloc
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
		return (NULL);

	a = malloc(size * sizeof(*a));
	if (a == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		a[i] = c;

	return (a);
}
