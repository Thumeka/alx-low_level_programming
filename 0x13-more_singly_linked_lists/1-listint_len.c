#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - returns the number of elements in a
 * linked listint_t list.
 * @h: linked list
 *
 * Return: number
 */

size_t listint_len(const listint_t *h)
{
	int j = 0;

	while (h != NULL)
	{
		h = h->next;
		j++;
	}
	return (j);
}
