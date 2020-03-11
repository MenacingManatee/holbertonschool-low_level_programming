#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - calls the calc function using sent in arguments
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 or 1, on success or failure respectively
 */
int main(int argc, char *argv[])
{
	int (*op)(int, int) = get_op_func(argv[2]);

	if (argc != 4 || op == NULL)
	{
		printf("Error\n");
		exit(98);
	}
	if ((argv[2][0] == '%' || argv[2][0] == '/') && (atoi(argv[3]) == 0))
	{
		printf("Error\n");
		exit(98);
	}
	if ((atoi(argv[1]) == 0 && argv[1][0] != '0') || (atoi(argv[3]) == 0 &&
							  argv[3][0] != '0'))
	{
		printf("Error\n");
		exit(98);
	}
	printf("%d\n", (*op)(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
