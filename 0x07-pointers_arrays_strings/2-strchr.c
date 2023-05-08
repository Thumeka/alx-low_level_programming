#include "main.h"

/**
 * _strchr - locates a character string.
 * @c: char
 * @s: string
 *
 * Return: c in string s or NULL.
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}

		s++;
	}

	if  (c == '\0')
	{
		return (s);
	}

	return (NULL);
}
