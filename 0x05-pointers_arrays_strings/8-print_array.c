#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints the last n elements of array a
 *@a: array to be printed
 *@n: Last n elements to be printed
 * Return: void
 */
void print_array(int *a, int n)
{
	int size, dig;

	size = (sizeof(a) / 2);
	dig = size - (n - 1);
	printf("%d", a[dig]);
	for (; dig < size; dig++)
		printf(", %d", a[dig + 1]);
	printf("\n");
}
