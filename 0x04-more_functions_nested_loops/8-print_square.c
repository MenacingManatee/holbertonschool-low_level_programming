#include "holberton.h"

/**
 * print_square - prints an ascii art square
 *@size: size of the square
 * Return: Always 0 (ok)
 */
void print_square(int size)
{
	int l, w;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (l = 0; l < size; l++)
	{
		for (w = 0; w < size; w++)
			_putchar('#');
		_putchar('\n');
	}
}
