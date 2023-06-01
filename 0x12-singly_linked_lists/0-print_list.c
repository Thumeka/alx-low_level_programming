#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: linked list
 *
 * Return: nodes
 */

size_t print_list(const list_t *h)
{
	size_t ls;

	ls = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		ls++;
		h = h->next;
	}
	return (ls);
}
