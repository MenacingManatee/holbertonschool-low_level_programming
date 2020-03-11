#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the operation codes of its own function
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0 (ok)
 */
int main(int argc, char *argv[])
{
	int bytes;
	long i = 0;
	unsigned int j = 256;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	bytes = atoi(argv[1]);

	for (i = 0; i < bytes - 1; i++)
	{
		if (*((char *)(&main + i)) % j < 16)
			putchar('0');
		printf("%x ", *((char *)(&main + i)) % j);
	}
	if (*((char *)(&main + (i))) % j < 16)
		putchar('0');
	printf("%x\n", *((char *)(&main + (i))) % j);
	return (0);
}
