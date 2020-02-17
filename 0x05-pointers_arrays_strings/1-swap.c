#include "holberton.h"

/**
 * swap_int - swaps the values of two ints using pointers
 * @*a: pointer to int a
 * @*b: pointer to int b
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *b;
	*b = *a;
	*a = tmp;
}
