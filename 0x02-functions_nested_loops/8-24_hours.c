#include "holberton.h"

/**
 * jack_bauer - prints every minute of a day
 *
 * Return: none
 */
void jack_bauer(void)
{
	int hours, mins = 0;

	for (hours = 0; hours < 24; hours++)
	{
		for (mins = 0; mins < 60; mins++)
		{
			_putchar((hours / 10) + '0');
			_putchar((hours % 10) + '0');
			_putchar(':');
			_putchar((mins / 10) + '0');
			_putchar((mins % 10) + '0');
			_putchar('\n');
		}
	}
}
