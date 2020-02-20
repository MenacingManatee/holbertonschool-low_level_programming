#include "holberton.h"


/**
 * string_toupper - replaces all lowercase letters with uppercase
 *@s: string to replace lowercase from
 * Return: char string
 */
char *string_toupper(char *s)
{
	int i = 0, n;

	while (s[i])
		i++;
	for (n = 0; n < i - 1; n++)
		if ((s[n] >= 'a') && (s[n] <= 'z'))
			s[n] -= ('a' - 'A');
	return (s);
}
