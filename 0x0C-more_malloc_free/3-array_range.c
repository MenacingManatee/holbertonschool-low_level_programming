#include <stdlib.h>
#include "holberton.h"

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: Null on failure, pointer to integer array otherwise
 */
int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
		return (NULL);
	arr = malloc(((max - min) + 1) * sizeof(int));

	if (!arr)
		return (NULL);
	for (i = 0; min <= max; min++, i++)
	{
		arr[i] = min;
	}
	return (arr);
}
