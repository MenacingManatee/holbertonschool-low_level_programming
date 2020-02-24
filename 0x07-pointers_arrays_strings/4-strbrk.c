#include "holberton.h"
#include <stdio.h>
/**
 * _strpbrk - finds the first occurrence of any byte in accept
 * @s: source string
 * @accept: bytes to search for
 * Return: Pointer to first matching byte, or null byte
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (*s)
	{
		i = 0;
		while(accept[i])
		{
			if (*s == accept[i])
				break;
			i++;
		}
		if (*s == accept[i])
			break;
		s++;
	}
	return (s);
}
