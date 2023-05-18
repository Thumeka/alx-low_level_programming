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
	int *a;
	int k;

	if (min > max)
	{
		return (NULL);
	}

	a = malloc((max - min + 1) * sizeof(*a));

	if (a == NULL)
		return (NULL);

	for (k = 0; min <= max; k++, min++)
		a[k] = min;

	return (a);
}
