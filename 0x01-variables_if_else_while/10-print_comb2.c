#include <stdio.h>

/**
 * main - Prints the numbers 0-99.
 * Certain functions are forbidden,
 * one function can be used at most 5 times.
 * Return: Always 0 (ok)
 */
int main(void)
{
	int num = 0;

	do {
		if (num > 10)
			putchar((num / 10) + '0');
		putchar((num % 10) + '0');
		if (num < 99)
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	} while (num < 100);
	putchar('\n');
	return (0);
}
