#include <stdio.h>

/**
 * main - Prints all possible combinations of three digits.
 * All three digits must be different and must not have shown in combination
 * before.
 * Return: Always 0 (ok)
 */
int main(void)
{
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	int minnum = 1;
	int minmod = 0;

	for (num1 = 0; num1 < 10; num1++, minmod++)
	{
		minnum = (1 + minmod);
		for (num2 = (1 + minmod); num2 < 10; num2++, minnum++)
		{
			for (num3 = minnum; num3 < 10; num3++)
			{
				if ((num1 != num3) && (num2 != num3)
				    && (num1 != num2))
				{
					putchar((num1 % 10) + '0');
					putchar((num2 % 10) + '0');
					putchar((num3 % 10) + '0');
					if ((num1 != 7) ||
					    (num2 != 8) || (num3 != 9))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
