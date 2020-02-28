#include <stdio.h>
#include "holberton.h"

/**
 * main - prints the number of arguments passed to it
 * @argc: Number of arguments passed to main
 * @argv: contents of arguments
 * Return: Always 0 (ok)
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
