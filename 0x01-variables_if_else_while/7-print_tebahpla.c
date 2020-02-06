#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, reversed.
 * Only uses 2 instances of the allowed command.
 * Return: Always 0 (ok)
 */
int main(void)
{
	int ch = 'z';

	do {
		putchar(ch);
		ch--;
	} while (ch > 'a' - 1);
	putchar('\n');
	return (0);
}
