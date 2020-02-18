#include "holberton.h"

/**
 * _strlen - returns the length of a string
 * @s: a string (pointer to the first letter) provided by user
 * Return: string length
 */
int _strlen(char *s)
{
	int len;

	while (s[len] != '\0')
		len++;
	return (len);
}
