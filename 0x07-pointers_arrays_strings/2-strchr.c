#include "holberton.h"

/**
 * _strchr - locates a character in a string
 * @s: source string
 * @c: character to find
 * Return: pointer to the character in s
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			break;
		s++;
	}
	return (s);
}
