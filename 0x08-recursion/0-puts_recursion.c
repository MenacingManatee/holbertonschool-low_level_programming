#include "holberton.h"

/**
 * _puts_reccursion - prints a string, followed by a newline
 * @s: String to print
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
	return;
}
