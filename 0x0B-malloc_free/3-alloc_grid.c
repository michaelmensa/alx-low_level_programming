#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of the array
 * @height: height of the array
 * Return: a pointer to a 2 dimensional array of integers
 */

int **alloc_grid(int width, int height)
{

	int w, h, **grid;

	if (width <= 0 || height <= 0)
	{
		return ('\0');
	}

	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
	{
		return (NULL);
	}

	for (w = 0 ; w < height ; w++)
	{
		grid[w] = malloc(sizeof(int) * width);
		if (grid[w] == NULL)
		{
			for (w = w - 1; w >= 0 ; w--)
			{
				free(grid[w]);
			}
			free(grid);
			return (NULL);
		}
		for (h = 0 ; h < width ; h++)
		{
			grid[w][h] = 0;
		}
	}

	return (grid);
}
