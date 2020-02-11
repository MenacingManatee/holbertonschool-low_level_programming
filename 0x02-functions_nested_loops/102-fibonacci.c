#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0 (ok)
 */
int main(void)
{
	unsigned long crnt = 2;
	unsigned long lst = 1;
	int i;
	unsigned long tmp;

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
