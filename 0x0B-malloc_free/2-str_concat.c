#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first
 * @s2: second
 *
 * Return: NULL, pointer to new allocated memory.
 */

char *str_concat(char *s1, char *s2)
{
	char *arr;
	int f = 0, g = 0, l1 = 0, l2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[l1] != '\0')
	{
		l1++;
	}

	while (s2[l2] != '\0')
	{
		l2++;
	}

	arr = malloc((l1 + l2 + 1) * sizeof(char));
	if (arr == NULL)
	{
		return (NULL);
	}

	for (f = 0; f < l1; f++)
	{
		arr[f] = s1[f];
	}

	for (g = 0; g < l2; g++)
	{
		arr[f + g] = s2[g];
	}
	arr[f + g] = '\0';
	return (arr);
}
