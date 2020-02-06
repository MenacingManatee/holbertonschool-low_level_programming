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
		printf("is positive\n");
	}
	else if (n < 0)
	{
		printf("is negative\n");
	}
	else
	{
		printf("is zero\n");
	}
	return (0);
}
