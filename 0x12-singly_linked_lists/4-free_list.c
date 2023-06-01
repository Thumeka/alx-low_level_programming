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
	while (head != NULL)
	{
		if (head->str)
			head = head->next;
		free(head->str);
		free(head);
	}
}
