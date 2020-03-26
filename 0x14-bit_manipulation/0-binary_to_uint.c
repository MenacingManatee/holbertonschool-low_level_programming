#include "holberton.h"

/**
 * binary_to_uint - converts a binary string to decimal
 * @b: binary string to convert
 * Return: 0 on fail, converted num otherwise
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;

	while (*b)
	{
		if (*b == '0' || *b == '1')
		{
			if (sum != 0)
				sum <<= 1;
			if (*b == '1')
				sum++;
		}
		else
			return (0);
		b++;
	}
	return (sum);
}
