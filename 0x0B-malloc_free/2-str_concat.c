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

	if (s1 == 0)
		s1 = " ";

	if (s2 == 0)
		s2 = " ";

	for (b = 0; s1[b] != '\0'; b++)
		;

	for (a = 0; s2[a] != '\0'; a++)
		;
	a++;

	arr = malloc(a * sizeof(*s1) + b * sizeof(*s2));

	if (arr == 0)
		return (NULL);

	for (f = 0, g = 0; f < a + b; f++)
	{
		if (f < a)
			arr[f] = s1[f];
		else
			arr[f] = s2[g++];
	}

	return (arr);
}
