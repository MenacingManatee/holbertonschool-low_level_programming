#include "holberton.h"

/**
 * _strncpy - copies up to n bytes of a string
 *@dest: destination pointer
 *@src: source string
 *@n: bytes to copy
 * Return: dest pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int num = 0, j;

	while (src[num])
		num++;
	for (j = 0; j < n; j++)
	{
		if (j > num)
			dest[j] = '\0';
		else
			dest[j] = src[j];
	}
	return (dest);
}
