#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - an array function
 * @array: an array
 * @size: size of the array
 * @action: a pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
