#include "holberton.h"
#include <string.h>

/**
 * rev_string - reverses a string
 *@s: string sent by user
 * Return: void
 */
void rev_string(char *s)
{
	int i = 0, j = 0, k;
	char arr[2048];

	while (s[i] != '\0')
		i++;
	k = i;
	while ((i != 0) && (s[j] != '\0'))
	{
		arr[i - 1] = s[j];
		j++;
		i--;
	}
	i = 0;
	while ((arr[i] != '\0') && (i < k))
	{
		s[i] = arr[i];
		i++;
	}
}
