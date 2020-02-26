#include "holberton.h"

int checker(int sqrt, int num);
/**
 * _sqrt_recursion - returns the square root of a number
 * @n: input number
 * Return: Squrt of n
 */
int _sqrt_recursion(int n)
{
	int i = 0, sqrt;

	sqrt = checker(i, n);
	return (sqrt);
}
/**
 * checker - checks for square root
 * @sqrt: the current square index
 * @num: number to find the square of
 *
 * Return: the square root of base, or -1 if one can't be found
 */
int checker(int sqrt, int num)
{
	if (sqrt * sqrt == num)
	{
		return (sqrt);
	}
	if (sqrt * sqrt > num)
		return (-1);
	return (checker(sqrt + 1, num));
}
