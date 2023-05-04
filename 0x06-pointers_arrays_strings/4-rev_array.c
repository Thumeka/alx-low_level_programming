#include "main.h"

/**
 * reverse_array - function that reverses the content of an
 * array of integers.
 * @a: char
 * @n: int
 *
 * Return: 0.
 */

void reverse_array(int *a, int n)
{
	int j, k;

	for (j = 0; (j < (n - 1) / 2); j++)
	{
		k = a[j];

		a[j] = a[n - 1 - j];
		a[n - 1 - j] = k;
	}
}
