#include "main.h"
#include <stdlib.h>

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
	int k, p;
	unsigned int len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	if (n >= len2)
		n = len2;

	arr = malloc(sizeof(char) * (len1 + n + 1));

	if (arr == NULL)
		return (NULL);

	for (k = 0; k < len1; k++)
	{
		arr[k] = s1[k];
	}

	for (p = 0; p < n; p++)
	{
		arr[k + p] = s2[p];
	}

	arr[k + p] = '\0';
	return (arr);
}
