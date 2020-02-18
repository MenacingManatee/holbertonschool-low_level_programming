#include "holberton.h"

/**
 * *_strcpy - copies a string to *dest
 *@dest: Pointer to copy string to
 *@src: string to copy
 * Return: *dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0, j;

	while (src[i] != '\0')
		i++;
	for (j = 0; j < i; j++)
		dest[j] = src[j];
	dest[j] = '\0';
	return (dest);
}
