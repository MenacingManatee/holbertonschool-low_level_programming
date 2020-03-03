#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>
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
	int i, j, k, n, m = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			;
		n += j + 1;
	}
	n--;
	printf("%d\n", n);
	cat = malloc((n) * sizeof(char) + ac);
	if (cat == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			k = (j * ac) + j + m;
			cat[k] = av[i][j];
			printf("%c%c\n", cat[k - 1], cat[k]);
		}
		m++;
		cat[++k] = '\n';
	}
	return (cat);
}
