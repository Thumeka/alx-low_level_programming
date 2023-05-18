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
	unsigned int k = 0, p = 0, len1 = 0, len2 =0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[k])
		k++;
	while (s2[p])
		p++;

	if (n >= p)
		len1 = k + p;
	else
		len1 = k + n;

	arr = malloc(sizeof(char) * len1 + 1);

	if (arr == NULL)
		return (NULL);

	p = 0;
	while (len2 < len1)
	{
		if (len2 <= k)
			arr[len2] = s1[len2];
		if (len2 >= k)
		{
			arr[len2] = s2[p];
			p++;
		}

		len2++;
	}

	arr[len2] = '\0';
	return (arr);
}
