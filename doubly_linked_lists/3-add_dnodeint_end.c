#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - add a node at the end of the list
 * @head: head of the list a pointer
 * @n: int created
 * Return: new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *new_node2 = *head;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		new_node->next = NULL;
		*head = new_node;
	}

	else
	{
		while (new_node2->next)
			new_node2 = new_node2->next;
		new_node->prev = new_node2;
		new_node2->next = new_node;
	}
	return (new_node);
}
