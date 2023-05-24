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

	for (j = 0; j < size; j++)
	{
		action(array[j]);
	}
}
