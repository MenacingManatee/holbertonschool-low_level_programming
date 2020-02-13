#include <stdio.h>

/**
 * main - finds and prints largest prime factor of 612852475143
 *
 * Return: Always 0 (ok)
 */
int main(void)
{
	long factor = 612852475143;
	int prime = 2, check = 2;
	int factors[20];
	int i = 0, z;

	for (prime = 2; prime < factor / 2; prime++)
	{
		for (check = 2; check <= prime / 2; check++)
		{
			if ((prime % check == 0) && (prime != check))
				prime++;
		}
		if (factor <= prime)
		{
			factors[++i] = prime;
			return (0);
		}
		if (factor % prime == 0)
		{
			factors[i++] = prime;
			factor = factor / prime;
			prime = 2;
		}
		else
			prime++;
	}
	for (i = 0; i < 20; i++)
	{
		if (i == 0)
			z = factors[i];
		if (factors[i] > z)
			z = factors[i];
	}
	printf("%d\n", z);
	return (0);
}
