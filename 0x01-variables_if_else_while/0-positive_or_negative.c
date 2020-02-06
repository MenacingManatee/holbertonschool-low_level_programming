#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main - gets a psuedo-randoom number seeded by the current time.
 * Function determines if this number is negative, positive, or zero.
 * Return: Always 0 (ok)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%i is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%i is negative\n", n);
	}
	else
	{
		printf("%i is zero\n", n);
	}
	return (0);
}
