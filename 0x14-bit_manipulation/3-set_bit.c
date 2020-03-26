#include "holberton.h"

/**
 * set_bit - sets a bit at index of *n to 1
 * @n: pointer to int to change bit of
 * @index: index to shift
 *
 * Return: 1 on success -1 on failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	mask <<= index;
	mask = mask | *n;
	*n = mask;
	return (1);
}
