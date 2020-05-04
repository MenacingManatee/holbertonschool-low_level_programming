#include "holberton.h"

/**
 * _abs - computes the absolute value of an integer
 * @x: The integer sent by the user to be converted to absolute value
 * Return: absolute value of input integer
 */
int _abs(int x)
{
	if (x >= 0)
		return (x);
	else
		return (-x);
}
