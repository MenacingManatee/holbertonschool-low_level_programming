#include "holberton.h"

/**
 * print_chessboard - prints a chessboard from a provided array of arrays
 * @a: source chessboard
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	i = j = 0;
	while (i < 8)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
		i++;
	}
}
