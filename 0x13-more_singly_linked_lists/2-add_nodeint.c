#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning
 * of a listint_t list.
 * @head: pointer
 * @n: value 1
 *
 * Return: address or NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *fresh_n;

	fresh_n = malloc(sizeof(listint_t));
	if (fresh_n == NULL)
	{
		return (NULL);
	}
	fresh_n->n = n;
	fresh_n->next = *head;
	*head = fresh_n;

	return (fresh_n);
}
