#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Source code assigns a random number to n.
 * my code takes the last digit of this number and determines if it is > 5
 * Return: Always 0 (ok)
 */
int main(void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = abs((n % 10));
	printf("Last digit of %i is %i ", n, l);
	if (l > 5)
		printf("and is greater than 5\n");
	else if (l == 0)
		printf("and is 0\n");
	else
		printf("and is less than 6 and not 0\n");
	return (0);
}
