#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: number
 * @size: size
 *
 * Return: NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;
	unsigned int k;
	char *a;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	a = malloc(nmemb * size);
	arr = a;

	if (a == 0)
	{
		return (NULL);
	}

	for (k = 0; k < (nmemb * size); k++)
		a[k] = 0;

	return (arr);
}
