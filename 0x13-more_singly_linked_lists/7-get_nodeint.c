#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer
 * @index: of the node
 *
 * Return: NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j = 0;
	listint_t *fresh_n = head;

	while (fresh_n != NULL)
	{
		if (j == index)
		{
			return (fresh_n);
		}
		j++;
		fresh_n = fresh_n->next;
	}

	return (NULL);
}
