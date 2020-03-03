#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - frees a grid allocated by alloc_grid
 * @grid: grid allocated by alloc_grid
 * @height: height of grid
 * Return: Void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
