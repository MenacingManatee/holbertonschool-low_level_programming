#include "function_pointers.h"

/**
 * array_iterator - calls function *action on all elements of array
 * @array: array of elements to perform an action on
 * @size: size of array
 * @action: function to perform on all elements
 *
 * Return: Always 0 (ok)
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array == NULL || action == NULL || size == 0)
		return;
	for (; i < size; i++)
		(*action)(array[i]);
}
