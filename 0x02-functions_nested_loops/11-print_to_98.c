#include <stdio.h>

/**
 * print_to_98 - prints numbers n-98, seperated by a comma
 * @n: a number provided by the user to count from
 *
 * Return: none
 */
void print_to_98(int n)
{
	if (n >= 98)
		for (; n >= 98; n--)
		{
			if (n == 98)
				printf("%d\n", n);
			else
				printf("%d, ", n);
		}
	else
		for (; n < 99; n++)
		{
			if (n == 98)
				printf("%d\n", n);
			else
				printf("%d, ", n);
		}
}
