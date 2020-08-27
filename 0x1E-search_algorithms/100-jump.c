#include "search_algos.h"
#include <math.h>

/**
 * linear - searches for a value in a sorted array of integers
 * @array: array to be searched
 * @start: Starting index
 * @end: ending index
 * @value: value to be searched for
 *
 * Return: index of number, or -1
 */
int linear(int *array, size_t start, size_t end, int value)
{
	size_t i;

	for (i = start; i <= end; i++)
	{
		printf("Value checked array [%d] = [%d]\n", (int)i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
/**
 * jump_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search
 * @size: number of elements in arraynumber of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located, or -1 on failure
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump, start, i;

	if (array == NULL || size == 0)
		return (-1);
	jump = sqrt(size);
	for (i = start = 0; i < size; i += jump)
	{
		if (array[i] >= value)
		{
			printf("Value found between indexes [%d] and [%d]\n",
			       (int)start, (int)i);
			return (linear(array, start, i, value));
		}
		else if (i + jump >= size)
		{
			printf("Value checked array[%d] = [%d]\n", (int)i,
			       array[i]);
			printf("Value found between indexes [%d] and [%d]\n",
			       (int)i, (int)(i + jump));
			return (linear(array, i, size - 1, value));
		}
		else
			printf("Value checked array[%d] = [%d]\n", (int)i,
			       array[i]);
		start = i;
	}
	return (-1);
}
