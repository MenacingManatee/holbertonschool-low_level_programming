#include <stdlib.h>
#include "holberton.h"

/**
 * alloc_grid - allocates an empty array of arrays
 * @width: width of integer array
 * @height: height of integer array
 *
 * Return: NULL on failure, else pointer to 2 dimensional int array
 */
int **alloc_grid(int width, int height)
{
	int **arr = malloc(height * sizeof(int *));
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int **) * width);
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
