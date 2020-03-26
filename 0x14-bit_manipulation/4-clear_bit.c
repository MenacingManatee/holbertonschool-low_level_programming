#include "holberton.h"

/**
 * clear_bit - sets a bit at an index to 0
 * @n: int to target
 * @index: bit to clear
 *
 * Return: 1 on success, -1 on failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (n == NULL || index > 31)
		return (-1);
	*n &= ~(mask << index);
	return (1);
}
