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
		s1 = " ";

	if (s2 == NULL)
		s2 = " ";

	for (a = 0; s1[a] != '\0'; a++)
		;

	for (b = 0; s2[b] != '\0'; b++)
		;

	arr = malloc((a * sizeof(*s1)) + (b * sizeof(*s2)) + 1);

	if (arr == NULL)
		return (NULL);

	for (f = 0, g = 0; f < (a + b + 1); f++)
	{
		if (f < a)
			arr[f] = s1[f];
		else
			arr[f] = s2[g++];
	}

	return (arr);
}
