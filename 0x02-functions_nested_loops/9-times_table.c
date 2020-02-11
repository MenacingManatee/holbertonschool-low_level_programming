#include "holberton.h"
#define SEPERATE {\
	_putchar(',');\
	_putchar(' ');\
	}
/**
 * times_table - prints the multiplication table of 9
 *
 * Return: none
 */
void times_table(void)
{
	int l = 0, h = 0, multi = 0;

	for (h = 0; h < 10; h++)
	{
		for (l = 0; l < 10; l++)
		{
			multi = (l * h);
			if (multi >= 10)
			{
				SEPERATE;
				_putchar((multi / 10) + '0');
				_putchar((multi % 10) + '0');
			}
			else
			{
				if (l != 0)
				{
					SEPERATE;
					_putchar(' ');
				}
				_putchar(multi + '0');
			}
		}
		_putchar('\n');
	}
}
