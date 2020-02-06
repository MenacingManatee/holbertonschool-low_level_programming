#include <stdio.h>

/**
 * main - Prints all possible combinations of single digit numbers
 * seperated by a comma
 * Return: Always 0 (ok)
 */
int main(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		putchar((i % 10) + '0');
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
