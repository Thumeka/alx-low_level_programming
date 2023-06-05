#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * index of a listint_t linked list.
 * @head: pointer
 * @index: of the node
 *
 * Return: 1 or -1 if fails
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int j;
	listint_t *fresh_n;
	listint_t *n_node;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = fresh_n->next;
		free(fresh_n);
		return (1);
	}

	j = 1;
	while (j < index)
	{
		fresh_n = fresh_n->next;
		if (fresh_n == NULL)
			return (-1);
		j++;
	}
	n_node = fresh_n->next;
	fresh_n->next = n_node->next;
	free(n_node);
	return (1);
}
