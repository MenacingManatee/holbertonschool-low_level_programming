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

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		;
	dupe = malloc(sizeof(char) * i + 1);
	if (dupe == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		dupe[i] = str[i];
	}
	dupe[i] = '\0';
	return (dupe);
}
