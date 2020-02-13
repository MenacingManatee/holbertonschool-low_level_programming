#include <stdio.h>

/**
 * main - prints the largest prime factor of given number
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long num = 612852475143, largest;
	unsigned long factors[2];
	unsigned int prime = 2;
	int i = 0;

	while (i <= 2)
	{
		if (num % prime == 0)
		{
			factors[i++] = prime;
			num = num / prime;
			if (i > 2)
				break;
		}
		else
			prime++;
	}
	if ((factors[0] > factors[1]) && (factors[0] > factors[2]))
		largest = factors[0];
	else if ((factors[1] > factors[2]) && (factors[1] > factors[0]))
		largest = factors[1];
	else
		largest = factors[2];
	printf("%lu\n", largest);
	return (0);
}
