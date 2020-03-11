#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - looks for the first index where cmp does not return 0
 * @array: array of integers to search
 * @size: Size of array
 * @cmp: function to compare with
 *
 * Return: First index where cmp does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	for (i = 0; i < size && (*cmp)(array[i]) == 0; i++)
		;
	return (i);
}
