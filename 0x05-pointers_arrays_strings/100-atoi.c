#include <stdio.h>

/**
 * _atoi - converts a string to an integer
 *@s: string to be converted
 * Return: the number after conversion, or 0
 */
int _atoi(char *s)
{
	int i = 0, j, n1, n2, sum = 0, neg = 0;

	while (s[i] != '\0')
		i++;
	for (j = 0, n1 = 0, n2 = 0; j <= i; j++)
	{
		if (s[j] == '-')
		{
			neg -= 1;
			continue;
		}
		else if (s[j] == '+')
		{
			neg += 1;
			continue;
		}
		else if ((s[j] >= '0') && (s[j] <= '9'))
		{
			if (n1 > n2)
			{
				sum *= 10;
				n2 = n1;
			}
			sum += s[j] - '0';
			n1++;
		}
		else if (s[j] == ' ')
			continue;
		else if ((sum != 0) && (i > 1))
			break;
	}
	if (neg < 0)
		sum = -sum;
	return (sum);
}
