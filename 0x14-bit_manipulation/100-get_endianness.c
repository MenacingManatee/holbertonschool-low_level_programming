#include "holberton.h"

/**
 * get_endianness - Checks the endianness
 *
 * Return: 0 if big endian. 1 f little endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *test = (char *)&i;

	if (*test)
		return (1);
	else
		return (0);
}
