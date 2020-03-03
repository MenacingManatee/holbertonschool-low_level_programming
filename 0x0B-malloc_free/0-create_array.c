#include <stdlib.h>
#include "holberton.h"

/**
 * create_array - creates an array of characters, initialized with char c
 * @size: size of the array
 * @c: character to fill array with
 * Return: pointer to the array, or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size <= 0)
		return (NULL);
	arr = malloc(size * sizeof(char));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		*(arr + i) = c;
	}
	*(arr + i) = '\0';
	return (arr);
}
