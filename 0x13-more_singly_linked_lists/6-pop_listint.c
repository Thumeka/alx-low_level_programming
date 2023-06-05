#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n)
 * @head: pointer
 *
 * Return: 0 if empty
 */

int pop_listint(listint_t **head)
{
	listint_t *fresh_n;
	int d;

	if (*head == NULL)
	{
		return (0);
	}
	fresh_n = *head;
	d = fresh_n->n;

	*head = (*head)->next;
	free(fresh_n);

	return (d);
}
