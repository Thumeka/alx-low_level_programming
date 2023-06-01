#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @str: string
 * @head: double pointer
 *
 * Return: new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *n_node;
	unsigned int len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len])
	{
		len++;
	}

	n_node = malloc(sizeof(list_t));

	if (n_node != NULL)
	{
		return (NULL);
	}

	n_node->str = strdup(str);
	n_node->len = len;
	n_node->next = (*head);
	(*head) = n_node;

	return (*head);
}
