#include "holberton.h"

/**
 * flip_bits - finds the number of bits needed to flip to get from n to m
 * @n: number 1
 * @m: number 2
 *
 * Return: Number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int tmp = n^m, mask = 2147483648;
	unsigned int t = 0;

	while (mask > 0)
	{
		if (mask & tmp)
			t++;
		mask >>= 1;
	}
	return (t);
}
