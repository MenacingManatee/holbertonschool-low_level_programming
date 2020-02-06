#include <stdio.h>

/**
 * main - Uses the allowed command exactly twice to print the alphabet in
 * lowercase, except the characters 'q' and 'e'.
 * Return: Always 0 (ok)
 */
int main(void)
{
	int ch = 'a';

	do {
		if ((ch != 'q') && (ch != 'e'))
			putchar(ch);
		ch++;
	} while (ch < 'z' + 1);
	putchar('\n');
	return (0);
}
