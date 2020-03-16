#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

int _strlen(const char * const s);
/**
 * print_all - prints all arguments, seperated by char *separator
 * @format: list of all types of arguments
 *
 * Return: Void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *tmp;
	char *sep = "";

	va_start(args, format);
	if (format == NULL)
	{
		printf("\n");
		return;
	}

	while (format[i])
	{
		switch (format[i])
		{
		case 'c':
		{
			printf("%s, %c", sep, va_arg(args, int));
			break;
		}
		case 'i':
		{
			printf("%s, %d", sep, va_arg(args, int));
			break;
		}
		case 'f':
		{
			printf("%s, %f", sep, va_arg(args, double));
			break;
		}
		case 's':
		{
			tmp = va_arg(args, char *);
			if (tmp == NULL)
				tmp = "(nil)";
			printf("%s, %s", sep, tmp);
			break;
		}
		default:
		{
			i++;
			continue;
		}
		}
		sep = ", ";
		i++;
	}
	printf("\n");
	va_end(args);
}
