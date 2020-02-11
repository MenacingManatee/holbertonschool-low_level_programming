#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0 (ok)
 */
int main(void)
{
	long unsigned int crnt = 2;
	long unsigned int lst = 1;
	int i;
	long unsigned int tmp;

	printf("%lu\n%lu\n", lst, crnt);
	for (i = 0; i <= 46; i++)
	{
		tmp = crnt + lst;
		lst = crnt;
		crnt = tmp;
		printf("%lu\n", crnt);
	}
	return (0);
}
