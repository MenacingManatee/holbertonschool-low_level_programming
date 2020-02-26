#include "holberton.h"

/**
 * factorial - returns the factorial of a number
 * @n: number to find factorial of
 *
 * Return: factorial of int
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
	{
		n *= factorial(n - 1);
		return (n);
	}
}
