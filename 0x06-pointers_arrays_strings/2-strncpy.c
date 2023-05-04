#include "main.h"

/**
 * _strncpy - copy a string
 * @dest: char
 * @src: char
 * @n: int
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && *(src + a); a++)
	{
		*(dest + a) = *(src + a);
	}
	for (; a < n; a++)
	{
	*(dest + a) = '\0';
	}

	return (dest);
}
