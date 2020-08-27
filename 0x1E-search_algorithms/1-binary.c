#include "search_algos.h"

/**
 * print_array - prints an array
 * @array - array to print
 * @i1 - start index
 * @i2 - end index
 *
 * Return: size of sub array
 */
int print_array(int *array, size_t i1, size_t i2)
{
	size_t i;

	printf("Searching in array: %d", (int)array[i1]);
	for (i = i1 + 1; i < i2; i++)
		printf(", %d", array[i]);
	printf("\n");
	return (i2 - i1);
}
/**
 * binary_search - searches for a value in a sorted array
 * @array - pointer to the first element of the array
 * @size - the number of elements in array
 * @value - the value to search for
 *
 * Return: the index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, end = size, start = 0;

	if (size == 0 || array == NULL)
		return (-1);
	for (i = (size - 1) / 2; print_array(array, start, end) > 1;)
	{
		if (array[i] == value)
			return (i);
		else if (array[i] > value)
		{
			end = i;
			i = (i - 1) / 2;
		}
		else
		{
			start = i + 1;
			i = i + ((end - i) / 2);
		}
	}
	return (-1);
}
