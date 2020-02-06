#include <stdio.h>

/**
 * main - Prints all possible combinations of two two-digit numbers
 *
 * Return: Always 0 (ok)
 */
int main(void)
{
	int n1 = 0;
	int n2 = 0;
	int m1 = 0;
	int m2 = 0;
	int minnum = 0;

	for (n1 = 0; n1 < 10; n1++)
	{
		for (n2 = 0; n2 < 10; n2++)
		{
			for (m1 = n1; m1 < 10; m1++)
			{
				if (m1 <= n1)
					minnum = n2;
				else
					minnum = 0;
				for (m2 = minnum; m2 < 10; m2++)
				{
					if ((n1 != m1) || (n2 != m2))
					{
						putchar((n1 % 10) + '0');
						putchar((n2 % 10) + '0');
						putchar(' ');
						putchar((m1 % 10) + '0');
						putchar((m2 % 10) + '0');
						if ((n1 + n2 + m1 + m2) != 35)
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
