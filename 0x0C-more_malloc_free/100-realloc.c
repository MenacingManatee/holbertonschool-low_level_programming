#include <stdlib.h>
#include "holberton.h"

/**
 * _realloc - reallocates a memory block to a new size, and copies the contents
 * @ptr: pointer to reallocate
 * @old_size: size of previous pointer
 * @new_size: Size to reallocate to
 * Return: Pointer to new memory address, or NULL on failure
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	new = malloc(new_size);
	if (!new)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return ((void *)new);
	for (i = 0; i < old_size; i++)
	{
		new[i] = *((char *)ptr + i);
	}
	free(ptr);
	return ((void *)new);
}
