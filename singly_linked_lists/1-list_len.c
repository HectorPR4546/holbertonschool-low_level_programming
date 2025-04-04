#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * list_len - elements of lists
 * @h: linked list pointer
 * Return: count of elements
 */
size_t list_len(const list_t *h)
{
	size_t count;

	for (count = 0; h != NULL; count++)
	{
		h = h->next;
	}
	return (count);
}
