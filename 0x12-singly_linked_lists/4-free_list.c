#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - unction that frees a list_t list.
 * @head: head node
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *f;

	f = head;

	while (head != NULL)
	{
		f = head;
		
		free(f->str);
		free(f);
		head = head->next;
	}
}
