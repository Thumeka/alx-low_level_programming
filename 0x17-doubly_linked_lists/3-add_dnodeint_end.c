#include "lists.h"

/**
 * add_dnodeint_end - new node at the start
 * @head: header
 * @n: node
 *
 * Return: element or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *n_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	dlistint_t *elem = *head;

	if (n_node == NULL)
	{
		return (NULL);
	}

	n_node->n = n;
	n_node->next = NULL;

	if (*head == NULL)
	{
		n_node->prev = NULL;
		*head = n_node;
	}
	else
	{
		while (elem->next != NULL)
		{
			elem = elem->next;
		}
	}

	return (n_node);
}
