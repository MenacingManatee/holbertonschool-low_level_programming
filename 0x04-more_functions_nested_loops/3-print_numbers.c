#include "holberton.h"

/**
 * print_numbers - prints 0-9, followed by a newline. Uses putchar twice.
 *
 * Return: Void
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
		_putchar(i + '0');
	_putchar('\n');
}
