#include <stdio.h>

/**
 * main - Prints the first 98 fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0 (ok)
 */
int main(void)
{
	long double fib1 = 1.0;
	long double fib2 = 2.0;
	long double tmp = 3.0;
	int i;

	printf("%.0Lf, %.0Lf, ", fib1, fib2);
	for (i = 0; i < 90; i++)
	{
		tmp = fib1 + fib2;
		fib1 = fib2;
		fib2 = tmp;
		printf("%.0Lf, ", fib2);
	}
	fib1 /= 10000;
	fib2 /= 10000;
	for (; i <= 94; i++)
	{
		tmp = fib1 + fib2;
		fib1 = fib2;
		fib2 = tmp;
		if (i != 94)
			printf("%.0Lf, ", (fib2 * 10000));
		else
			printf("%.0Lf\n", (fib2 * 10000));
	}
	return (0);
}
