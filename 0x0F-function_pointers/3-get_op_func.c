#include <stdio.h>
#include "3-calc.h"
/**
 * get_op_func - returns the address to the correct function based on operator s
 * @s: argv[2], should be an operator
 *
 * Return: Address of correct function, or NULL
 */
int (*get_op_func(char *s))(int, int);
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	while (ops[i].op != NULL)
	{
		if (!(strcmp(ops[i].op, s)))
			break;
		i++;
	}

	return (ops[i].f);
}
