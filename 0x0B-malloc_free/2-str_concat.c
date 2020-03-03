#include <stdlib.h>
#include "holberton.h"

/**
 * str_concat - concatenates s1 and s2 into a malloced space
 * @s1: first string in result
 * @s2: second sring in result
 *
 * Return: Pointer to malloced result
 */
char *str_concat(char *s1, char *s2)
{
	char *cat;
	int i, j, k, n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
		;
	for (j = 0; s2[j]; j++)
		;
	n = i + j + 1;
	cat = malloc((n) * sizeof(char));
	if (cat == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		cat[k] = s1[k];
	for (j = 0; k < n; k++, j++)
		cat[k] = s2[j];
	cat[k] = '\0';
	return (cat);
}
