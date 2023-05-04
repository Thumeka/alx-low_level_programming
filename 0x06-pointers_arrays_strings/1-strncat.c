#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 * @n: int
 * @dest: char
 * @src: char
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
	{
		continue;
	}
	for (b = 0; src[b] != '\0' && b < n; b++)
	{
		dest[a + b] = src[b];
	}

	dest[a + b] = '\0';
	return (dest);
}
