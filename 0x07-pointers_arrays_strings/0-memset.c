#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 * @n: bytes of memory
 * @s: constant byte b
 * @b: memory of pointer
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int k = 0;

	for (k = 0; k < n; k++)
	{
		*(s + k) = b;
	}
	return (s);
}
