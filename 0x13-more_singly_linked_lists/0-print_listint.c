#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: linked list
 *
 * Return: nodes
 */

size_t print_listint(const listint_t *h)
{
	 size_t ls;

	 ls = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		ls++;
	}
	return (ls);
}
