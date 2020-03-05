#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: amount of arguments, including filename
 * @argv: argument vector
 * Return: Always 0 (ok)
 */
int main(int argc, char *argv[])
{
	int i, j;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n", argv[i][j]);
				exit(98);
			}
		}
	}
	return (0);
}
