#include "search_algos.h"

/**
 * binary_search - function that searches for a value in a sorted array
 * of integers using the Binary search algorithm
 * @array: the array
 * @size: the size number
 * @value: the value
 * Return: value is not present in array or if array is NULL, your
 * function must return -1
 **/

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t midd, k;

	if (!array || size == 0)
		return (-1);
	while (left <= right)
	{
		printf("Searching in array: ");
		for (k = left; k < right; k++)
			printf("%d ", array[k]);
		printf("%d\n", array[k]);

		midd = left + ((right - left) / 2);
		if (value == array[midd])
			return (midd);

		if (value < array[midd])
			right = midd - 1;

		else
			left = midd + 1;
	}

	return (-1);
}
