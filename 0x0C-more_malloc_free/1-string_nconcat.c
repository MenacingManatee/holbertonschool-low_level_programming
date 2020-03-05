#include <stdlib.h>
#include "holberton.h"

/**
 * string_nconcat - concatenates two strings, up to n bytes
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes to concatenate
 *
 * Return: Pointer to allocated space, or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, len;
	char *cat;

	if (s1 == NULL)
		s1 = "";
	for (len = 0; s1[len]; len++)
		;
	if (s2 == NULL)
		s2 = "";
	cat = malloc((n + len) * sizeof(char));
	if (cat == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
	{
		cat[i] = s1[i];
	}
	for (len = 0; len < n; i++, len++)
		cat[i] = s2[len];
	return (cat);
}
