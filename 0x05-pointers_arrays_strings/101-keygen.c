#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/**
 * main - generates random valid passwords
 *
 * Return: Always 0 (ok)
 */
char * main(void)
{
	int i;
	char *chars[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"};
	char *pass[100];
	int num = rand() % 99;

	srand(time(0));

	for (i = 0; i < num; i++)
	{
		pass[i] = chars[(rand() % 62)];
	}
	printf("%s", *pass);
	putchar('\n');
	return (*pass);
}
