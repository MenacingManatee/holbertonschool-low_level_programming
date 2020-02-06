#include <stdio.h>

/**
 * main - Prints all single digits 0-9 using allowed command only twice
 * Return: Always 0 (ok)
 */
int main(void)
{
	int num = 0;

	do {
		putchar((num % 10) + '0');
		num++;
	} while (num < 10);
	putchar('\n');
	return (0);
}
