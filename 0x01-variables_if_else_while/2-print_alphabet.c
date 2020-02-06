#include <stdio.h>

/**
 * main - prints the entirety of the alphabet, followed by a newline
 * Return: Always 0 (ok)
 */
int main(void)
{
	int ch = 'a';

	do {
	putchar(ch);
	ch++;
	} while (ch < 'z' + 1);
	putchar('\n');
	return (0);
}
