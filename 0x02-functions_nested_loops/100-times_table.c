#include "holberton.h"
#define SEPERATE {\
	_putchar(',');\
	_putchar(' ');\
	}
/**
 * print_times_table - prints the multiplication table of n numbers
 * @n: the number of tables to print, starting from 0
 *
 * Return: none
 */
void print_times_table(int n)
{
	int l = 0, h = 0, multi = 0;

	n++;
	if ((n > 15) || (n < 0))
		return;
	for (h = 0; h < n; h++)
	{
		for (l = 0; l < n; l++)
		{
			multi = (l * h);
			if (multi >= 10)
			{
				SEPERATE;
				if (multi >= 100)
				{
					_putchar((multi / 100) + '0');
					_putchar(((multi % 100) / 10) + '0');
				}
				else
				{
					_putchar(' ');
					_putchar((multi / 10) + '0');
				}
				_putchar((multi % 10) + '0');
			}
			else
			{
				if (l != 0)
				{
					SEPERATE;
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(multi + '0');
			}
		}
		_putchar('\n');
	}
}
