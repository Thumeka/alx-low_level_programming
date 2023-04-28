#include "main.h"

/**
 * print_square - Write a function that prints a square,
 * followed by a new line.
 * @size: square
 *
 * Return: void
 */

void print_square(int size)
{
	int k, l;

	if (size <= 0)
		_putchar('\n');

	for (k = 0; k < size; k++)
	{
		for (l = 0; l < (size); l++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
