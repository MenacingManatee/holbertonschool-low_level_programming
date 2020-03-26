#include "holberton.h"

/**
 * get_bit - gets the bit at index index
 * @n: num to check
 * @index: bit to get
 *
 * Return: Value of the bit at index, or -1 on failure
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1;

	n >>= index;
	return (n & mask);
}
