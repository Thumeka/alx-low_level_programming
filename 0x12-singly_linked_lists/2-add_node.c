#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @str: string
 * @head: double pointer
 *
 * Return: new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *n_node;

	n_node = malloc(sizeof(list_t));

	if (n_node == NULL)
	{
		return (NULL);
	}

	n_node->str = strdup(str);

	n_node->len = _strlen(str);
	n_node->next = *head;
	*head = n_node;

	return (n_node);
}

/**
 * _strlen - function that returns the length of a string.
 * @s: string
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
