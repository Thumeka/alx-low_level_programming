#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint -  frees a listint_t list.
 * @head: pointer
 */

void free_listint(listint_t *head)
{
	listint_t *fresh_n;

	fresh_n = head;

	while (head != NULL)
	{
		fresh_n = head;
		head = head->next;
		free(head);
	}
}
