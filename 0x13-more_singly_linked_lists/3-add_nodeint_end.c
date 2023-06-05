#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: pointer
 * @n: value int
 *
 * Return: address or NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *fresh_n, *new;

	fresh_n = malloc(sizeof(listint_t));
	if (fresh_n == NULL)
	{
		return (NULL);
	}
	fresh_n->n = n;
	fresh_n->next = NULL;

	if (*head == NULL)
	{
		*head = fresh_n;
	}
	else
	{
		new = *head;
		while (new->next != NULL)
		{
			new = new->next;
		}
		new->next = fresh_n;
	}
	return (*head);
}
