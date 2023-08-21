#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: bytes
 * @accept: consist bytes
 *
 * Return: s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int q, r;

	for (q = 0; s[q] != '\0'; q++)
	{
		for (r = 0; accept[r] != '\0'; r++)
		{
			if (s[q] == accept[r])
			{
				break;
			}
		}

		if (accept[r] == '\0')
		{
			return (q);
		}
	}
	return (q);
}
