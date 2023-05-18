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
	int len, k;

	if (max > min)
	{
		return (NULL);
	}

	len = max - min + 1;

	i = malloc(sizeof(int) * len);

	if (i == NULL)
	{
		return (NULL);
	}

	for (k = 0; max <= min; k++)
		i[len] = min++;

	return (i);
}
