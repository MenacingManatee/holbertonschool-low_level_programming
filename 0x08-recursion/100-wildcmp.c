#include "holberton.h"
#include <stdio.h>

int _strlen(char *s);
int checker(char *s1, char *s2);
/**
 * wildcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: 0 if not the same, 1 if the same
 */
int wildcmp(char *s1, char *s2)
{
	int x, len;

	len = _strlen(s1);
	x = checker(s1, s2);
	return (x == len);
}
/**
 * checker - checks if two strings are identical
 * @s1: string 1
 * @s2: string 2
 *
 * Return: 0 or 1 if is not or is identical respectively
 */
int checker(char *s1, char *s2)
{
	if (*s1 == *s2)
		return (1 + checker(s1 + 1, s2 + 1));
	else if (*s1 != '\0' && *s2 == '*')
	{
		if (*(s1 + 1) == *(s2 + 1))
		{
			printf("s1: %c, s2: %c\n", *s1, *s2);
			return (1 + checker(s1 + 1, s2 + 1));
		}
		else
		{
			printf("s1: %c, s2: %c\n", *s1, *s2);
			return (1 + checker(s1 + 1, s2));
		}
	}
	return (0);
}
/**
 * _strlen - gets the length of a function
 * @s: string to evaluate
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	if (*s)
		return (1 + _strlen(s + 1));
	return (0);
}
