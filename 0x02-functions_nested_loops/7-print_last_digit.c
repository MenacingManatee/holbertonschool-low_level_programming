#include "holberton.h"

/**
 * print_last_digit - returns the value of the last digit
 * @x: Digit sent by user to be returned as absolute value
 * Return: See above
 */
int print_last_digit(int x)
{
	int dig = (x % 10);
	int abs = -dig;

	if (x < 0)
	{
		_putchar(abs + '0');
		return (abs);
	}
	else
	{
		_putchar(dig + '0');
		return (dig);
	}
}
