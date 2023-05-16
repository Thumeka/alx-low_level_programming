#include "main.h"
#include <stdio.h>
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

	while (s1[a] != '\0')
	{
		a++;
	}

	while (s1[b] != '\0')
	{
		b++;
	}

	arr = malloc((a + b + 1) * sizeof(char));

	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	for (f = 0; f < a; f++)
		arr[f] = s1[f];

	g = b;

	for (b = 0; b <= g; f++, b++)
		arr[f] = s2[b];

	return (arr);
}
