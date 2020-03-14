#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Finds the sum of all input ints
 * @n: Number of variable inputs
 *
 * Return: Sum of inputs
 */
int sum_them_all(const unsigned int n, ...)
{
	int b = 0;
	unsigned int i;
	va_list a_list;

	va_start(a_list, n);
	if (n == 0)
	{
		va_end(a_list);
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		b += va_arg(a_list, int);
	}
	va_end(a_list);
	return (b);
}
