#include <stdlib.h>
#include "holberton.h"

/**
 * _strdup - duplicates a string
 * @str: string to duplicate
 *
 * Return: Null, or pointer to duplicated string
 */
char *_strdup(char *str)
{
	char *dupe;
	int i;

	if (*str == '\0')
		return ('\0');
	for (i = 0; str[i]; i++)
		;
	if ((char *)malloc(sizeof(char *) * i) != NULL)
		dupe = (char *)malloc(sizeof(char *) * i);

	for (i = 0; str[i]; i++)
	{
		dupe[i] = str[i];
	}
	return (dupe);
}
