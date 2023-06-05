#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * new_node - creates new node
 * @n: data
 *
 * Return: NULL or address
 */

listint_t *new_node(int n)
{
	listint_t *fresh_n;

	if (fresh_n == NULL)
	{
		return (NULL);
	}
	fresh_n->n = n;
	fresh_n->next = NULL;

	return (NULL);
}

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
	unsigned int j;
	listint_t *fresh_n;
	listint_t *n_node;

	if (head == NULL)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		fresh_n = new_node(n);
		if (fresh_n == NULL)
		{
			return (NULL);
		}
		fresh_n->next = *head;
		*head = fresh_n;
		return (NULL);
	}

	n_node = *head;
	while (n_node != NULL && j < idx - 1)
	{
		n_node = n_node->next;
		j++;
	}

	fresh_n = new_node(n);
	if (fresh_n == NULL)
	{
		return (NULL);
	}

	fresh_n->next = n_node->next;
	n_node->next = fresh_n;

	return (fresh_n);
}
