#include "holberton.h"

/**
 * _islower - Checks for lowercase character
 * @c: A letter sent by the user to test for lowercase
 * Return: None
 */
int _islower(int c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	else
		return (0);
}
