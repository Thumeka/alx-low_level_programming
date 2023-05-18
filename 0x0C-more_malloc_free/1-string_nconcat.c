#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first
 * @s2: second
 * @n: bytes
 *
 * Return: NULL pointer to memory.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *arr;
	unsigned int len1 = 0, len2 = 0, k = 0, f = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
		len1++;

	while (s2[len2])
		len2++;

	if (n >= len2)
		f = len1 + len2;
	else
		f = len1 + n;

	arr = malloc(sizeof(char) * f + 1);

	if (arr == NULL)
		return (NULL);

	len2 = 0;

	while (k < f)
	{
		if (k <= len1)
			arr[k] = s1[k];
		if (k >= len1)
		{
			arr[k] = s2[len2];
			len2++;
		}
		k++;
	}
	arr[k] = '\0';
	return (arr);
}
