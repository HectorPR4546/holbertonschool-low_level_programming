#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - show de elements of a list
 * @h: head of the list
 * Return: elements of the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len;

	if (h == NULL)
		return (0);

	for (len = 0; h != NULL; len++)
	{
		h = h->next;
	}
	return (len);
}
