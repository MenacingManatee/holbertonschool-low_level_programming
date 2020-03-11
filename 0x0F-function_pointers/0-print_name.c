#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Calls a printf function provided using name *name
 * @name: name to print
 * @f: pointer to print function
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	(*f)(name);
}
