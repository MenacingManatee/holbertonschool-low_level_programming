#include "holberton.h"
#include <stdio.h>
/**
 * print_number - prints an integer
 *@n: integer to be printed
 * Return: Always 0 (ok)
 */
void print_number(int n)
{
	int i = 0, j = n, k;
	unsigned int x = 10;
	unsigned int neg = -n;

	for (; j; i++)
	{
		j = j / 10;
	}
	if (n <= 0)
	{
		if (n == 0)
		{
			_putchar('0');
			return;
		}
		else
		{
			_putchar('-');
			n = neg;
		}
	}
	else if (n < 10)
	{
		_putchar(n + '0');
		return;
	}
	k = i;
	for (; k - 2; k--)
		x = x * 10;
	for (; i != 0; i--)
	{
		_putchar(((n / x) % 10) + '0');
		x = x / 10;
	}
}
