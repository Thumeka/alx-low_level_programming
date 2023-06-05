#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer
 * @idx: index
 * @n: value
 *
 * Return: NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j = 1;
	listint_t *fresh_n;
	listint_t *n_node;

	if (head == NULL)
		return (NULL);

	fresh_n = *head;
	for (j = 1; fresh_n && j < idx; j++)
	{
		fresh_n = fresh_n->next;
		if (fresh_n == NULL)
			return (NULL);

	}

	n_node = malloc(sizeof(listint_t));
	if (n_node == NULL)
	{
		free(n_node);
		return (NULL);
	}
	n_node->n = n;

	if (idx == 0)
	{
		*head = n_node;
		n_node->next = fresh_n;
	}
	else if (fresh_n->next)
	{
		n_node->next = fresh_n->next;
		fresh_n->next = n_node;
	}
	else
	{
		n_node->next = NULL;
		fresh_n->next = n_node;
	}
	return (n_node);
}
