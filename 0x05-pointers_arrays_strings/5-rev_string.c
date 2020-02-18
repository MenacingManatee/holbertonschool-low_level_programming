#include "holberton.h"

/**
 * rev_string - reverses a string
 *@s: string sent by user
 * Return: void
 */
void rev_string(char *s)
{
	int i = 0, j = 0, k, arr[150];

	while (s[i] != '\0')
		i++;
	k = i;
	while ((i != 0) && (s[j] != '\0'))
	{
		arr[i] = s[j];
		j++;
		i--;
	}
	i = 0;
	while ((arr[i] != '\0') && (i < k))
	{
		s[i] = arr[i + 1];
		i++;
	}
}
