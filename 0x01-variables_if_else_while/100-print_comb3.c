#include <stdio.h>

/**
 * main - Prints all possible combinations of two digits.
 *
 * Return: Always 0 (ok)
 */
int main(void)
{
	int num1 = 0;
	int num2 = 0;
	int minnum = 0;

	for (num1 = 0; num1 < 10; num1++, minnum++)
	{
		for (num2 = minnum; num2 < 10; num2++)
		{
			if (num1 != num2)
			{
				putchar((num1 % 10) + '0');
				putchar((num2 % 10) + '0');
				if ((num1 != 8) || (num2 != 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
