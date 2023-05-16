#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: int size
 * @height: int size
 *
 * Return: NULL, new grid.
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int h, w;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = malloc(height * sizeof(*grid));

	if (grid == NULL)
	{
		return (NULL);
	}

	for (w = 0; w < height; w++)
	{
		grid[w] = malloc(width * sizeof(int));

		if (grid[w] == NULL)
		{
			for (h = 0; h < w; h++)
			{
				free(grid[h]);
			}
			free(grid);
			return (NULL);
		}
		for (h = 0; h < width; h++)
		{
			grid[w][h] = 0;
		}
	}
	return (grid);
}
