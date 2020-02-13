#include "holberton.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle in lines
 * Return: Always 0 (ok)
 */
void print_triangle(int size)
{
	int i, x, y;
	int vis = 1, inv;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < size; i++)
	{
		for (inv = size - vis, x = 0; x < inv; x++)
			_putchar(' ');
		for (vis = size - inv, y = 0; y < vis; y++)
			_putchar('#');
		_putchar('\n');
		vis++;
	}
}
