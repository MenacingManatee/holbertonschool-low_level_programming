#include "holberton.h"

/**
 * _strlen_recursion - uses recursion to get the length of a string
 * @s: input string
 * Return: size of string
 */
int _strlen_recursion(char *s)
{
	int i;

	if (*s)
	{
		i = 0;
		i = _strlen_recursion(s + 1);
	}
	if (*s == '\0')
		i--;
	return (i + 1);
}
