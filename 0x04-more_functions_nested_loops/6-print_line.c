#include "holberton.h"

/**
 * print_line - prints a line of underscores
 *@n: the number of underscores to print
 * Return: void
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar('_');
	_putchar('\n');
}
