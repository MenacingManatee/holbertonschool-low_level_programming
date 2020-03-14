#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints all strings in arg list seperated by char *separator
 * @separator: char * to seperate strings printed
 * @n: number of inputs
 *
 * Return: Void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strs;
	unsigned int i;
	char *tmp;

	va_start(strs, n);
	for (i = 0; i < n; i++)
	{
		tmp = va_arg(strs, char *);
		if (tmp)
			printf("%s", tmp);
		else
			printf("(nil)");
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
		else if (i == n - 1)
			printf("\n");
	}
	va_end(strs);
}
