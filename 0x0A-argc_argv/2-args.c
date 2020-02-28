#include <stdio.h>
#include "holberton.h"

/**
 * main - Prints all arguments it receives
 * @argc: number of arguments
 * @argv: array of the arguments received
 * Return: Always 0 (ok)
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
