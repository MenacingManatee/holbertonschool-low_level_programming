#include "holberton.h"
#include <stdio.h>
/**
 * infinite_add - adds two numbers
 *@n1: FIrst number to add
 *@n2: Second number to add
 *@r: buffer used for storage
 *@size_r: buffer size
 * Return: Pointer to result
 */
int _strlen(char *a);
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry = 0, i, j, len;

	i = _strlen(n1);
	j = _strlen(n2);

	if (i > j)
		len = i + 1;
	else
		len = j + 1;
	if (len >= size_r)
		return (0);
	for (; len > 0; len--)
	{
		if (carry == 1)
		{
			r[len] = 1;
		}
		while ((i > 0) && (j > 0))
		{
			if ((n1[i] - '0') + (n2[j] - '0')  + carry > 10)
			{
				carry++;
				r[len] += (((n1[i] - '0') +
						 (n2[j] - '0')) + '0');
			}
			else
				r[len] += (((n1[i] - '0') + carry +
						 (n2[j] - '0')) + '0');
			i--;
			j--;
		}
		if ((i > 0) && (j < 0))
		{
			r[len] += n1[i];
			i--;
		}
		else if ((j > 0) && (i < 0))
		{
			r[len] += n2[j];
			j--;
		}
	}
	if (r[0] == '\0')
		return (r + 1);
	else
		return (r);
}

/**
 *_strlen - finds the length of a string
 *@a: string to find length of
 *
 *Return: Length of string
 */
int _strlen(char *a)
{
	int i = 0;

	while (a[i])
		i++;
	return (i);
}
