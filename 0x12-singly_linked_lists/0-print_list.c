#include "lists.h"
#include <stddef.h>
#include <stdio.h>
/**
 * print_list - prints all the elements of a list_t list.
 * @h: linked list
 *
 * Return: nodes
 */

size_t print_list(const list_t *h)
{
	size_t ls = 0;

	if (h == NULL)
		return (ls);

	while (h != NULL)
	{
		while (h)
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
	}
	return (ls);
}
