#include "holberton.h"

/**
 * puts2 - prints every other character of a string
 *@str: string provided by user
 * Return: void
 */
void puts2(char *str)
{
	int i = 0, j = 0;

	while (str[i] != '\0')
		i++;
	for (; j < i; j++)
	{
		if (j % 2 == 0)
			_putchar(str[j]);
	}
	_putchar('\n');
}
