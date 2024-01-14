#include "search_algos.h"
#include <math.h>
/**
 * jump_search - Searches for a value in a sorted array of integers
 * Using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located
 * If value is not found or if array is NULL, return -1
 **/

int jump_search(int *array, size_t size, int value)
{
	size_t jump_step, i, j;

	if (!array || size == 0)
		return (-1);

	jump_step = sqrt(size);
	i = 0;
	j = 0;
	while (i < size && array[i] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		j = i;
		i += jump_step;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", j, i);
	for (; j <= i && j < size; j++)
	{
		printf("Value checked array[%lu] = [%d]\n", j, array[j]);
		if (array[j] == value)
			return (j);
	}
	return (-1);

}
