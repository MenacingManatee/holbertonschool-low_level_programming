#include "holberton.h"

/**
 * _pow_recursion - returns x raised to the power of y
 *
 * Return: result
 */
int _pow_recursion(int x, int y)
{
	if (y < 1 && y != 0)
		x = -1;
	else if (y == 0)
		x = 1;
	else
	{
		x *= _pow_recursion(x, y - 1);
		return (x);
	}
	return (x);
}
