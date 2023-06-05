#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 -  frees a listint_t list.
 * @head: pointer
 */

void free_listint2(listint_t **head)
{
	listint_t *fresh_n;
	listint_t *next;

	if (head == NULL)
	{
		return;
	}

	fresh_n = *head;
	while (fresh_n != NULL)
	{
		next = fresh_n->next;
		free(fresh_n);
		fresh_n = next;
	}
	*head = NULL;
}
