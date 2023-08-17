#include "lists.h"

/**
 * dlistint_len - print length
 * @h: header
 *
 * Return: length
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t elem = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		current = current->next;
		elem += 1;
	}
	return (elem);
}
