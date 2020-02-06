#include <stdio.h>

/**
 * main - Prints all single base 10 digits
 * from 0, followed by a newline
 * Return: Always 0 (ok)
 */
int main(void)
{
	int num = 0;

	do {
		printf("%i", num);
		num++;
	} while (num < 10);
	putchar('\n');
	return (0);
}
