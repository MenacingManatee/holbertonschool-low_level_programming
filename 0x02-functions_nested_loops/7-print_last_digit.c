#include "holberton.h"

/**
 * print_last_digit(int) - returns the value of the last digit
 *
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
