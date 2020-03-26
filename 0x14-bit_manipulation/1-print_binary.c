B#include "holberton.h"
#include <limits.h>

/**
 * print_binary - takes an int and prints it in binary
 * @n: int to convert
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 2147483648; /*1 then 31 0's*/
	int flag = 0;

	while (mask > 0)
	{
		if (mask & n)
		{
			_putchar('1');
			flag = 1;
		}
		else if (flag == 1 || !(mask >> 1))
			_putchar('0');
		mask >>= 1;
	}
}
