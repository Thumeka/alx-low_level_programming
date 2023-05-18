#include "main.h"
#include <stdlib.h>

/**
 * array_range -  creates an array of integers.
 * @min: minimum range
 * @max: maximum range
 *
 * Return: new pointer array
 */

int *array_range(int min, int max)
{
	int *i;
	int len;

	if (max > min)
	{
		return (NULL);
	}

	i = malloc((max - min + 1) * sizeof(int));

	if (i == NULL)
	{
		return (NULL);
	}

	for (len = 0; max >= min; len++)
		i[len] = min++;

	return (i);
}
