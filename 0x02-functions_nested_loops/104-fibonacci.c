#include <stdio.h>

/**
 * main - Prints the first 98 fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0 (ok)
 */
int main(void)
{
	unsigned long fib1 = 1;
	unsigned long fib2 = 2;
	unsigned long tmp = 3;
	unsigned long fib1a, fib1b, fib2a, fib2b, tmp2;
	int i;

	printf("%lu, %lu, ", fib1, fib2);
	for (i = 0; i < 90; i++)
	{
		tmp = fib1 + fib2;
		fib1 = fib2;
		fib2 = tmp;
		printf("%lu, ", fib2);
	}
	fib1a = fib1 / 1000000;
	fib1b = fib1 % 1000000;
	fib2a = fib2 / 1000000;
	fib2b = fib2 % 1000000;
	for (; i <= 97; i++)
	{
		tmp = fib1a + fib2a;
		tmp2 = fib1b + fib2b;
		fib1a = fib2a;
		fib1b = fib2b;
		fib2a = tmp;
		fib2b = tmp2;
		if (fib2b > 1000000)
		{
			fib2b = fib2b % 1000000;
			fib2a++;
		}
		if (i != 97)
			printf("%lu%lu, ", fib2a, fib2b);
		else
			printf("%lu%lu\n", fib2a, fib2b);
	}
	return (0);
}
