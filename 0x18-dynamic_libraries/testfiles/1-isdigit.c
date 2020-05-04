#include "holberton.h"

/**
 * _isdigit - checks if c is a digit
 * @c: Character to be tested
 * Return: 1 if a digit, 0 otherwise
 */
int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
		return (1);
	else
		return (0);
}
