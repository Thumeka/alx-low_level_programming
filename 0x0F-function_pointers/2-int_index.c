#include "function_pointers.h"

/**
 * int_index -  function that searches for an integer.
 * @array: array
 * @cmp: pointer
 * @size: size array
 *
 * Return: 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int e = 0;

	if (array != NULL && cmp != NULL && size > 0)
	{
		for (e = 0; e < size; e++)
		{
			if (cmp(array[e]))
			{
				return (e);
			}
		}
	}
	return (-1);
}
