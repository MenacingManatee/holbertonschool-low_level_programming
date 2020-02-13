#include "holberton.h"

/**
 * print_diaagonal - prints a diagonal line
 *@n: number of lines
 * Return: void
 */
void print_diagonal(int n)
{
	int space, i;

	for (i = 0; i < n; i++)
	{
		for (space = 0; space < i; space++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
