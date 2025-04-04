#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - Adding a node to the end
 * @head: beginning of the list
 * @str: strings of the list
 * Return: 0 (success)
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int ln;
	list_t *tmp;
	list_t *end;

	for (ln = 0; str[ln] != '\0'; ln++)
	{
		;
	}

	tmp = malloc(sizeof(list_t));
	if (tmp == NULL)
		return (NULL);

	tmp->str = strdup(str);
	tmp->len = ln;
	tmp->next = NULL;

	if (*head == NULL)
		*head = tmp;
	else
	{
		end = *head;
		while (end->next != NULL)
			end = end->next;
		end->next = tmp;
	}
	return (tmp);
}
