#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning
 * of a listint_t list.
 * @head: pointer
 * @n: value
 *
 * Return: address or NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *n_node;

	n_node = malloc(sizeof(listint_t));
	if (n_node == NULL)
	{
		return (NULL);
	}
	n_node->n = n;
	n_node->next = *head;
	*head = n_node;
	return (n_node);
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
	unsigned int j = 1;
	listint_t *fresh_n;
	listint_t *n_node;

	if (head == NULL)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		fresh_n = new_node(head, n);
		return (fresh_n);
	}

	fresh_n = *head;
	while (j < idx)
	{
		fresh_n = fresh_n->next;
		if (fresh_n == NULL)
			return (NULL);
		j++;
	}
	n_node = malloc(sizeof(listint_t));
	if (n_node == NULL)
		return (NULL);
	n_node->n = n;
	n_node->next = fresh_n->next;
	fresh_n->next = n_node;

	return (n_node);
}
