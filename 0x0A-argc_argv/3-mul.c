#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 normally, 1 if error occurs
 */
int main(int argc, char *argv[])
{
	int sum;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		sum = strtol(argv[1], NULL, 10) * strtol(argv[2], NULL, 10);
		printf("%s, %s\n", argv[1], argv[2]);
		printf("%d\n", sum);
		return (0);
	}
}
