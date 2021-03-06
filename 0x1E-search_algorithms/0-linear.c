#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers using the
 * Linear search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: size of the array
 * @value: value to search for
 *
 * Return: Index of value, or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n",
		       (int) i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
