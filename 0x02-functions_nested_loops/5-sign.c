#include "holberton.h"

/**
 * print_sign - prints + if positive, 0 if zero, - if negative
 * @n: A number sent by the user to be tested for positive/negativity
 * Return: 1 - positive. 0 - zero -1 - negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
	return (0);
}
