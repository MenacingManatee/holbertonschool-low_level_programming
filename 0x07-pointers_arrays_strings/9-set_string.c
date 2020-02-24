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
	int i = 0, j = 0;

	while (to[j])
		j++;
	while (i <= j)
	{
		printf("%c, %c\n", *(*s + i), to[i]);
		*(s + i) = &to[i];
		printf("%c, %c\n\n", *(*s + i), to[i]);
		i++;
	}
}
