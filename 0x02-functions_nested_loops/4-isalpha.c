#include "holberton.h"

/**
 * _isalpha - checks if the character is a letter
 *
 * Return: 1 if a letter, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'A') && (c <= 'z'))
		return (1);
	else
		return (0);
}
