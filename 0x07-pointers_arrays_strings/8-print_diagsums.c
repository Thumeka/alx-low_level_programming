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
	int k, sum1 = 0, sum2 = 0;

	for (k = 0; k < size; k++)
	{
		sum1 += *(a + k * size + k);
	}

	for (k = 0; k < size; k++)
	{
		sum2 += *(a + k * size + (size - k - 1));
	}

	printf("Sum of main diagonal: %d\n", sum1);
	printf("Sum of secondary diagonal: %d\n", sum2);
}
