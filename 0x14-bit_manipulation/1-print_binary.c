#include "holberton.h"

/**
 * print_binary - takes an int and prints it in binary
 * @n: int to convert
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
