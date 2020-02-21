#include "holberton.h"
#include <stdio.h>

/**
 * print_buffer - prints size bytes of content b
 * @b: string to be printed
 * @size: number of bytes to print
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int i, n = 0, mod;


	if (size <= 0)
		putchar('\n');
	else
	{
		for (i = 0; (i * 10) < size; i++)
		{
			mod = i * 10;
			printf("%08x: ", mod);
			for (n = 0; n < 10; n++)
			{
				if (n % 2 == 0 && n != 0)
					printf(" ");
				if (n + mod > size - 1)
					printf("  ");
				else
					printf("%.2x", b[n + mod]);
			}
			putchar(' ');
			for (n = 0; n < 10; n++)
			{
				if (n + mod >= size)
					break;
				if (b[n + mod] <= 31 && b[n + mod] >= '\0')
					putchar('.');
				else
					putchar(b[n + mod]);
			}
			putchar('\n');
		}
	}
}
