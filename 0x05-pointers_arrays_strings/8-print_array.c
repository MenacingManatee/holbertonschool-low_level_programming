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
	int size, dig, i;
	int arr[2000];

	arr[0] = a[0];
	for (i = 1; arr[i - 1] != '\0'; i++)
		arr[i] = a[i];
	size = i - 2;
	dig = size - (n - 1);
	printf("%d", a[dig]);
	for (; dig < size; dig++)
		printf(", %d", a[dig + 1]);
	printf("\n");
}
