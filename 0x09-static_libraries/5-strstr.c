#include "main.h"
#include <stddef.h>

/**
 * _strstr - loactes a substring.
 * @needle: substring
 * @haystack: string
 *
 * Return: substring or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *k = haystack;
		char *d = needle;

		while (*haystack && *d && *haystack == *d)
		{
			haystack++;
			d++;
		}

		if (!*d)
		{
			return (k);
		}

		haystack = k + 1;
	}

	return (NULL);
}
