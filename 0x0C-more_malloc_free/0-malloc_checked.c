#include <stdlib.h>
#include "holberton.h"

/**
 * malloc_checked - allocates memory, on failure exits with code 98
 * @b: size of area to malloc
 * Return: Pointer to malloced memory
 */
void *malloc_checked(unsigned int b)
{
	void *mall;

	mall = malloc(b);
	if (mall == NULL)
	{
		exit(98);
	}
	return (mall);
}
