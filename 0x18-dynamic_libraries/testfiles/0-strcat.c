#include "holberton.h"
#include <stdio.h>
/**
 * _strcat - concatenates two strings
 *@dest: destination pointer
 *@src: Source string
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, n = 0, len;

	while (dest[i])
		i++;
	while (src[n])
		n++;
	len = i + n;
	for (n = 0; i < len; n++, i++)
	{
		dest[i] = src[n];
	}
	dest[i] = '\0';
	return (dest);
}
