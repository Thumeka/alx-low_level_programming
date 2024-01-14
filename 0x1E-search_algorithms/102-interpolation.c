#include "search_algos.h"

/**
 *interpolation_search - Searches for a value in a sorted array of integers
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: first index where value is located
 **/

int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, l, h;

	l = 0;
	h = size - 1;

	if (!array || size == 0)
		return (-1);

	while (l <= h)
	{
		pos = l + (((double)(h - l)) /
				(array[h] - array[l]) * (value - array[l]));
		if (pos > size)
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			return (-1);
		}
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		else if (array[pos] > value)
			h = pos;
		else
			l = pos + 1;
	}
	return (-1);
}
