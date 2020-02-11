#include "holberton.h"

/**
 * print_last_digit - returns the value of the last digit
 * @x: Digit sent by user to be returned as absolute value
 * Return: See above
 */
int print_last_digit(int x)
{
	int l;

	if (x < 0)
		l = (-x % 10);
	else
		l = (x % 10);
	_putchar(l + '0');
	return (l);
}
