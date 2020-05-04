#include "holberton.h"

/**
 * _isupper - checks iof provided character is an uppercase letter
 * @c: Character to test
 * Return: Always 0 (ok)
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
