#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - get the nth node
 * @head: start of the node
 * @index: the node starting from 0
 * Return: node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (head && (index != 0))
	{
		head = head->next;
		--index;
	}
	return (head);
}
