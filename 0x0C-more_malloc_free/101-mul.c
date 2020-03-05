#include <stdio.h>
#include <stdlib.h>

int _strlen(char *a);
int _atoi(char *s);
/**
 * main - multiplies two numbers
 * @argc: amount of arguments, including filename
 * @argv: argument vector
 * Return: Always 0 (ok)
 */
int main(int argc, char *argv[])
{
	int i, j, len1, len2, multi = 1, multi2 = 1;
	unsigned int num1, num2, res;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	len1 = _strlen(argv[1]);
	for (i = 0; i < len1; i++)
	{
		multi *= 10;
	}
	num1 = (long)malloc(multi * sizeof(int));
	len2 = _strlen(argv[2]);
	for (i = 0; i < len2; i++)
	{
		multi2 *= 10;
	}
	num2 = (long)malloc(multi2 * sizeof(int));
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	res = (long)malloc((multi * multi2  * 1000) * sizeof(int));
	res = num1 * num2;
	printf("%u\n", res);
	return (0);
}
/**
 * _atoi - converts a string to an integer
 *@s: string to be converted
 * Return: the number after conversion, or 0
 */
int _atoi(char *s)
{
	int i = 0, j, n1, n2, neg = 1, flag = 0;
	int sum = 0;

	while (s[i] != '\0')
		i++;
	for (j = 0, n1 = 0, n2 = 0; j <= i; j++)
	{
		if (s[j] == '-')
		{
			neg *= -1;
			continue;
		}
		else if (s[j] == '+')
		{
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
			flag = 1;
			n1++;
		}
		else if (s[j] == ' ')
			continue;
		else if ((flag == 1) && (!(s[j] >= '0') || !(s[j] <= '9')))
			break;
	}
	return (sum * neg);
}
/**
 * _strlen - finds the length of a string
 * @a: input string
 *
 * Return: length of string a
 */
int _strlen(char *a)
{
	int i = 0;

	while (a[i])
		i++;
	return (i);
}
