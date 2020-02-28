#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * main - adds numbers sent through argv
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 if successful, 1 if theres an error
 */
int main(int argc, char *argv[])
{
	int i = 0, sum = 0, j = 1;

	for (j = 1; j < argc; j++)
	{
		for (i = 0; argv[j][i]; i++)
			if (argv[j][i] > '9' || argv[j][i] < '0')
			{
				printf("Error\n");
				return (1);
			}
		sum += strtol(argv[j], NULL, 10);
	}
	printf("%d\n", sum);
	return (0);
}
