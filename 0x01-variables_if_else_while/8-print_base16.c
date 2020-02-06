#include <stdio.h>

/**
 * main - Prints all base 16 numbers in lowercase
 * followed by a newline
 * Return: Always 0 (ok)
 */
int main(void)
{
	int num = 0;
	int ch =  'a';

	do {
		if (num < 10)
		{
			putchar((num % 10) + '0');
			num++;
		}
		else
		{
			putchar(ch);
			ch++;
			num++;
		}
	} while (num < 16);
	putchar('\n');
	return (0);
}
