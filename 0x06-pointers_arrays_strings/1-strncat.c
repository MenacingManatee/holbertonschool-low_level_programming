#include "holberton.h"

/**
 * _strncat - concatenates up to n bytes of a string
 *@dest: destination pointer
 *@src: source string
 *@n: bytes to copy
 * Return: dest pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, num = 0, len;

	while (dest[i])
		i++;
	while (src[num])
		num++;
	len = i + num;

	for (num = 0; (i < len) && (num < n); num++, i++)
	{
		dest[i] = src[num];
	}
	return (dest);
}
