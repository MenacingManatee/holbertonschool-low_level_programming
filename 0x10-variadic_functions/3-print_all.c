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
	unsigned int len;
	char *tmp;
	char *sep = "";

	if (format == NULL)
	{
		printf("\n");
		return;
	}
	len = _strlen(format);
	va_start(args, format);
	while (i < len)
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
/**
 * _strlen - finds the length fo string s
 * @s: target string
 *
 * Return: length of s
 */
int _strlen(const char * const s)
{
	int len = 0;

	while (s[len])
	{
		len++;
		printf("%d\n", len);
	}
	return (len);
}
