#include "main.h"

/**
 * rot13 -  a function that encodes a string using rot13
 * @s: char
 *
 * Return: char
 */

char *rot13(char *s)
{
	int k, j;

	char b[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char c[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (k = 0; *(s + k); k++)
	{
		for (j = 0; j < 52; j++)
		{
			if (b[j] == *(s + k))
			{
				*(s + k) = c[j];
				break;
			}
		}
	}
	return (s);
}
