#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes
 * it with a specific char.
 * @c: char
 * @size: size of array
 *
 * Return: NULL if size = 0, pointer == NULL
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int s;

	if (size == 0)
		return (NULL);

	arr = malloc(size * sizeof(*arr));

	if (arr == NULL)

		return (NULL);

	for (s = 0; s < size; ++s)

		arr[s] = c;

	return (arr);
}
