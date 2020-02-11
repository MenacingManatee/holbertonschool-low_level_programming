#include <stdio.h>

/**
 * main - prints the sum of all fibonacci numbers not exceeding 4 million
 *
 * Return: Always 0 (ok)
 */
int main(void)
{
	unsigned long crnt = 2;
	unsigned long lst = 1;
	unsigned long tmp;
	unsigned long sum = 2;

	for (crnt = 2; crnt < 4000000;)
	{
		tmp = crnt + lst;
		lst = crnt;
		crnt = tmp;
		if ((crnt % 2) == 0)
			sum += crnt;
	}
	printf("%lu\n", sum);
	return (0);
}
