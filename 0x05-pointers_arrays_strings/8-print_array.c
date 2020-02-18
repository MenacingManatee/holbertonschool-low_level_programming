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
	int num;

	for (num = 0; num < n; num++)
	{
		printf("%d", a[num]);
		if (num != n - 1)
			printf(", ");
	}
	printf("\n");
}
