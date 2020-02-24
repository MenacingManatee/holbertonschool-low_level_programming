#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: source array of arrays
 * @size: size of arrays
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum1, sum2;

	i = j = sum1 = sum2 = 0;
	for (; i < size; i++)
	{
		sum1 += a[i * (1 + size)];
	}
	for (j = size - 1, i = 0; j >= 0; j--, i++)
	{
		sum2 += a[j + (size * i)];
	}
	printf("%d, %d\n", sum1, sum2);
}
