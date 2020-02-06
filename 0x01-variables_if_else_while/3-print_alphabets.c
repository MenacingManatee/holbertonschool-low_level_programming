#include <stdio.h>

/**
 * main - Uses only putchar as output to print the alphabet
 * in lowercase, followed by uppercase.
 * Return: Always 0 (ok)
 */
int main(void)
{
	int ch = 'a';

	do {
		putchar(ch);
		ch++;
	} while (ch < 'z' + 1);
	int ch2 = 'A';

	do {
		putchar(ch2);
		ch2++;
	} while (ch2 < 'Z' + 1);
	putchar('\n');
	return (0);
}
