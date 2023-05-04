#include "main.h"

/**
 * string_toupper - function that changes all lowercase letters of
 * a string to uppercase.
 * @s: char
 *
 * Return: uppercase
 */

char *string_toupper(char *s)
{
	int k;

	k = 0;

	for (k = 0; s[k] != '\0'; k++)
	{
		if (s[k] >= 'a' && s[k] <= 'z')
			s[k] = s[k] - 'a' + 'A';
	}
	return (s);
}
