#include "holberton.h"

/**
 * puts_half - prints the second half of a string
 *@str: string provided by user
 * Return: void
 */
void puts_half(char *str)
{
	int i = 0, half;

	while (str[i] != '\0')
		i++;
	half = i / 2;
	if (i % 2 != 0)
		half++;
	for (; half < i; half++)
		_putchar(str[half]);
	_putchar('\n');
}
