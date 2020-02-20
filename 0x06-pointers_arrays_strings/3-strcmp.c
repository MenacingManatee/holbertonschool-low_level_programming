#include "holberton.h"

/**
 * _strcmp - compares two strings
 *@s1: string 1 to be compared
 *@s2: string 2 to be compared
 * Return: a positive, negative, or 0 number based on how similar the strings are
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0;

	while ((s1[i] != '\0' && s2[j] != '\0') && s1[i] == s2[j])
	{
		i++;
		j++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 - *s2);
}
