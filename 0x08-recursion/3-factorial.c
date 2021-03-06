#include "holberton.h"

/**
 * factorial - returns the factorial of a number
 * @n: number to find factorial of
 *
 * Return: factorial of int
 */
int factorial(int n)
{
	if (n > 0)
	{
		n *= factorial(n - 1);
		return (n);
	}
	else if (n < 0)
		return (-1);
	else
		return (1);
}
