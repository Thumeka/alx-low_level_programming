#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat -  concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: bytes
 *
 * Return: NULL or point to memory.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *arr;
	int k, p, len1;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = (unsigned int)_strlen(s1);

	arr = malloc((len1 + n + 1) * sizeof(char));

	if (arr == NULL)
		return (NULL);

	for (k = 0, p = 0; k < (len1 + n); k++)
	{
		if (k < len1)
			arr[k] = s1[k];
		else
			arr[k] = s2[p++];
	}

	arr[k] = '\0';

	return (arr);
}

/**
 * _strlen - string length.
 * @s: string
 *
 * Return: length
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	return (i);
}
