#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n)
 * of a listint_t linked list.
 * @head: pointer
 *
 * Return: 0
 */

int sum_listint(listint_t *head)
{
	int add = 0;
	listint_t *fresh_n = head;

	while (fresh_n != NULL)
	{
		add += fresh_n->n;
		fresh_n = fresh_n->next;
	}

	return (add);
}
