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
	if (s == '/' || s == '+' || s == '%' ||s == '-'
	    || s == '*')
	{
		if (s == '+')
			return (&op_add);
		else if (s == '-')
			return (&op_sub);
		else if (s == '/')
			return (&op_div);
		else if (s == '%')
			return (&op_mod);
		else
			return (&op_mul);
	}
	else
	{
		return (NULL);
	}
}
