#include "main.h"

/**
 * _memcpy - function that copies memory area.
 * @n: bytes
 * @src: from  memory area
 * @dest: to  memory area
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int k, f;

	while (n--)
	{
		dest[k++] = src[f++];
		
		k++;
		f++;
	}

	return (dest);
}
