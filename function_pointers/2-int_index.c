#include "function_pointers.h"
/**
 * int_index - returns the index of first element
 * @array: an array
 * @size: the size
 * @cmp: a pointer
 * Return: -1 if size 0 or less
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size < 1 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
