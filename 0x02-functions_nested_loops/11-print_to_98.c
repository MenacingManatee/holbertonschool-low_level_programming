#include "holberton.h"
#define SEPERATE {\
	_putchar(',');\
	_putchar(' ');\
	}
/**
 * print_to_98 - prints numbers n-98, seperated by a comma
 * @n: a number provided by the user to count from
 *
 * Return: none
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		for (; n >= 98; n--)
		{
			if (n >= 100)
			{
				_putchar((n / 100) + '0');
				_putchar(((n % 100) / 10) + '0');
			}
			else
				_putchar(((n % 100) / 10) + '0');
			_putchar((n % 10) + '0');
			if (n != 98)
			{
				SEPERATE;
			}
			else
			{
				_putchar('\n');
			}
		}
	}
	else
	{
		for (; n <= 98; n++)
		{
			if (n >= 10)
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
			else if (n < 0)
			{
				_putchar('-');
				if (n <= -10)
				{
					_putchar((-(n / 10)) + '0');
					_putchar((-(n % 10)) + '0');
				}
				else
				{
					_putchar((-(n % 10)) + '0');
				}
			}
			else
			{
				_putchar((n % 10) + '0');
			}
			if (n != 98)
			{
				SEPERATE;
			}
			else
			{
				_putchar('\n');
			}
		}
	}
}
