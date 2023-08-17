#include "lists.h"

/**
 * print_dlistint - print the listint
 * @h: head pointer
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t elem = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		elem += 1;
	}
	return (elem);
}
