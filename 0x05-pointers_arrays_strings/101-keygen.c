#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/**
 * main - generates random valid passwords
 *
 * Return: Generated password
 */
int main(void)
{
	int i, sum = 0, num;
	char chars[100] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	char pass[200];
	char gap;

	srand(time(0));

	for (i = 0; sum < (2772 - 'z');)
	{
		num = rand() % 62;
		if (sum + chars[num] >= 2772)
			continue;
		else
		{
			pass[i] = chars[num];
			sum += pass[i];
			i++;
		}
	}
	gap = 2772 - sum;
	pass[i] = gap;
	return (*pass);
}
