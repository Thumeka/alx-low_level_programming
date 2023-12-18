#include "search_algos.h"

/**
 * linear_search -  function that searches for a value in an array of integers
 * using the Linear search algorithm
 * @array: the array
 * @size: the size number
 * @value: the value
 * Return: return the first index where value is located
 * value is not present in array or if array is NULL, your
 *function must return -1
 **/

int linear_search(int *array, size_t size, int value)
{
	size_t k;

	if (!array || size == 0)
		return (-1);
	for (k = 0; k <= size - 1; k++)
	{
		printf("Value checked array[%lu] = [%d]\n", k, array[k]);
		if (array[k] == value)
			return (k);
	}
	return (-1);
}
