#include <stdio.h>
#include <string.h>
#include "holbertonhead.h"

/**
 * main - prints holberton using _putchar
 *
 * Return: Always 0 (ok)
 */
int main(void)
{
	int i;
	char holb[] = "Holberton";
	int leng = sizeof(holb);

	for (i = 0; i < leng; i++)
		_putchar(holb[i]);
	putchar('\n');
	return (0);
}
