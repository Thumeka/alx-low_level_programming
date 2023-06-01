#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * _strlen - function that returns the length of a string.
 * @str: string
 *
 * Return: length of string
 */

int _strlen(const char *str)
{
	int j;

	j = 0;

	while (str[j] != '\0')
	{
		j++;
	}
	return (j);
}

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: head pointer
 * @str: string
 *
 * Return: address or NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n_node;
	list_t *ls = *head;

	if (head == NULL || str == NULL)
	{
		return (NULL);
	}

	n_node = malloc(sizeof(list_t));
	if (n_node == NULL)
	{
		return (NULL);
	}
	n_node->str = strdup(str);
	n_node->len = _strlen(str);
	n_node->next = NULL;

	if (*head == NULL)
	{
		*head = n_node;
	}
	else
	{
		*ls = **head;
		while (ls->next != NULL)
			ls = ls->next;
		ls->next = n_node;
	}

	return (n_node);
}
