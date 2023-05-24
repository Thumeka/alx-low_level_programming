#include "function_pointers.h"

/**
 * array_iterator -  function that executes a function given as
 * a parameter on each element of an array.
 * @size: size of array
 * @action: pointer function
 * @array: execute
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t j;

	j = 0;

	while (j < size)
	{
		action(array[j]);
		j++;
	}
}
