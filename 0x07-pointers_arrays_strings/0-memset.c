#include "holberton.h"

/**
 * _memset - fills first n bytes with constant b
 * @s: location to fill
 * @b: what to fill location with
 * @n: number of bytes to fill
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
