#include "holberton.h"
#include <stdio.h>
/**
 * set_string - sets value of a pointer to a char
 * @s: Pointer to change value of
 * @to: char to change value to
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
