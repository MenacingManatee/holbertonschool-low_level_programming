#include "holberton.h"

/**
 * main - prints holberton using _putchar
 *
 * Return: Always 0 (ok)
 */
int main(void)
{
	int i;

	char holb[] = "Holberton";
	int leng = (sizeof(holb) - 1);

	for (i = 0; i < leng; i++)
	{
		_putchar(holb[i]);
	}
	_putchar('\n');
	return (0);
}
