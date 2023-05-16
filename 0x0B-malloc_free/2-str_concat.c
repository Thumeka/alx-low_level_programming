#include "main.h"
#include <stdlib.h>

/**
 * str_concat -  concatenates two strings.
 * @s1: first
 * @s2: second
 *
 * Return: pointer to new memory or NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *arr;
	int a, b, f, g;

	if (s1 == NULL)
	{
		s1 = " ";
	}

	if (s2 == NULL)
	{
		s2 = " ";
	}

	for (b = 0; s1[b] != '\0'; b++)
		;

	for (a = 0; s2[a] != '\0'; a++)
		;

	arr = malloc(sizeof(char) * (a + b + 1));

	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	for (f = 0; f < a; f++)
		arr[f] = s1[f];

	g = a;

	for (a = 0; a <= g; f++, a++)
		arr[f] = s2[a];

	return (arr);
}
