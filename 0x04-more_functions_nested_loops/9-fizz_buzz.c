#include <stdio.h>

/**
 * main - prints 1 through 100, swapping multiples of 3 with Fizz and multiples
 * of 5 with Buzz
 *
 * Return: Always 0 (ok)
 */
int main(void)
{
	int i = 1;

	for (; i <= 100; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			if (i % 3 == 0)
				printf("Fizz");
			if (i % 5 == 0)
				printf("Buzz");
		}
		else
			printf("%d", i);
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
