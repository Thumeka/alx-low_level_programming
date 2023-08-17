#include "lists.h"
/**
* delete_dnodeint_at_index - deletes node at given idx
* @head: pointer to head of doubly linked list
* @index: index
* Return: 1 if successful, -1 if failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;
	dlistint_t *elem = *head;
	unsigned int j = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(tmp);
		return (1);
	}
	for (j = 0; j < index; j++)
	{
		if (elem == NULL)
		{
			return (-1);
		}
		elem = elem->next;
	}
	if (elem == NULL)
	{
		return (-1);
	}
	if (elem->prev != NULL)
	{
		elem->prev->next = elem->next;
	}
	if (elem->next != NULL)
	{
		elem->next->prev = elem->prev;
	}
	free(elem);
	return (1);
}
