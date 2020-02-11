#include "holberton.h"

/**
 * print_alphabet - prints the alphabet in lowercase using _putchar max twice
 *
 * Return: Always 0 (ok)
 */
void print_alphabet(void)
{
	int i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
