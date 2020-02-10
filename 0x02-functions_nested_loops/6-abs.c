#include "holberton.h"

/**
 * abs(int) - computes the absolute value of an integer
 *
 * Return: absolute value of input integer
 */
int _abs(int x)
{
	if (x >= 0)
		return (x);
	else
		return (-x);
}
