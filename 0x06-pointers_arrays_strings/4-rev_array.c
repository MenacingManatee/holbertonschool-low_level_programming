#include "holberton.h"

/**
 * reverse_array - reverses the content of an array of integers
 *@a: pointer to an array of integers
 *@n: number of elements in the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	n--;
	for (i = 0; i < n; i++, n--)
	{
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
	}
}
