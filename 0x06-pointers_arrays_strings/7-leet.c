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
	char b[] = {'4', '3', '0', '7', '1'};
	char c[] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};

	for (k = 0; *(s + k); k++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[k] == b[j])
				s[k] = c[j];
		}
	}
	return (s);
}
