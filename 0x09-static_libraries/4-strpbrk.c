#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches a string for any set of bytes.
 * @s: string
 * @accept: bytes
 *
 * Return: s that matches bytes in accept or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	char *k;

	while (*s != '\0')
	{
		k = accept;

		while (*k != '\0')
		{
			if (*s == *k)
			{
				return (s);
			}
			k++;
		}
		s++;
	}

	return (NULL);
}
