#include "lists.h"

/**
 *  sum_dlistint - print the sum of nodes
 *  @head: pointer
 *  Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sums = 0;

	if (!head)
		return (sums);
	while (head)
	{
		sums += head->n;
		head = head->next;
	}
	return (sums);
}
