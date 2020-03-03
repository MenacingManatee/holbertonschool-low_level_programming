#include <stdlib.h>
#include "holberton.h"

/**
 * argstostr - concatenates all arguments in av
 * @ac: Size of av
 * @av: Argument vector
 *
 * Return: Pointer to malloced result
 */
char *argstostr(int ac, char **av)
{
	char *cat;
	int i, j, k, n, m = 0, len;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			;
		n += j + 1;
	}
	n--;
	cat = malloc((n) * sizeof(char) + ac);
	if (cat == NULL)
	{
		free(cat);
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (len = 0; av[i][len]; len++)
			;
		for (j = 0; av[i][j]; j++)
		{
			k = j + m;
			cat[k] = av[i][j];
		}
		m += len;
		m++;
		cat[++k] = '\n';
	}
	return (cat);
}
