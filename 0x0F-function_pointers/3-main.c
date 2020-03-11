#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
#include <string.h>

/**
 * main - calls the calc function using sent in arguments
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 or 1, on success or failure respectively
 */
int main(int argc, char *argv[])
{
	int (*op)(int, int) = get_op_func(argv[2]);

	if (argc != 4 || argv == NULL)
	{
		printf("Error\n");
		exit(98);
	}
	if (op == NULL || ((!(strcmp(argv[2], "%")) ||
			    !(strcmp(argv[2], "/"))) && (atoi(argv[3]) == 0)))
	{
		printf("Error\n");
		exit(99);
	}
	if ((atoi(argv[1]) == 0 && argv[1][0] != '0') || (atoi(argv[3]) == 0 &&
							  argv[3][0] != '0'))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", (*op)(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
