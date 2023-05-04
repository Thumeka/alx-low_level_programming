#include "main.h"

/**
 * leet -  a function that encodes a string into 1337.
 * @s: char
 *
 * Return: char
 */

char *leet(char *s)
{
	int k, j;
	char b[] = "4433007711";
	char c[] = "aAeEoOtTlL";

	for (k = 0; *(s + k); k++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (b[j] == s[k])
				s[k] = c[j];
		}
	}
	return (s);
}
