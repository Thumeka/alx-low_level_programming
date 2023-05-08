#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - the sum of two diagonals of a
 * square matrix of integers
 * @a: integer
 * @size: size of matrix
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int d, e, f, g = 0, h = 0;

	for (d = 0; d < size; d++)
	{
		f = (d * size) + d;
		g += *(a + f);
	}

	for (e = 0; e < size; e++)
	{
		f = (e * size) + (size - 1 - e);
		h += *(a + f);
	}
	printf("%i, %i\n", g, h);
}
