#include "holberton.h"

/**
 * _memcpy - copies n bytes from src to dest
 * @dest: pointer to destination string
 * @src: source string
 * @n: bytes to copy
 *
 * Return: Always 0 (ok)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
