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
	char *arr = malloc(sizeof(char *) * size);
	unsigned int i;

	if (size <= 0)
		return ('\0');
	for (i = 0; i < size; i++)
	{
		*(arr + i) = c;
	}
	return (arr);
}
