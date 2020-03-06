#include "holberton.h"
#include <stdlib.h>

void print_err(char *s);
char *multi(int *num1, int len1, int *num2, int len2);
int _strlen(char *a);
unsigned long _atoi(char *s);
int *make_arr(char *s, int len);
/**
 * main - multiplies two numbers
 * @argc: amount of arguments, including filename
 * @argv: argument vector
 * Return: Always 0 (ok)
 */
int main(int argc, char *argv[])
{
	int i, j, len1, len2;
	int *num1;
	int *num2;
	char *res;

	if (argc != 3)
	{
		print_err("Error");
		exit(98);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				print_err("Error");
				exit(98);
			}
		}
	}
	if (_atoi(argv[1]) == 0 || _atoi(argv[2]) == 0)
	{
		_putchar('0');
		_putchar('\n');
		return (0);
	}
	len1 = _strlen(argv[1]) - 1;
	len2 = _strlen(argv[2]) - 1;
	num1 = malloc(len1 * sizeof(int));
	num2 = malloc(len2 * sizeof(int));
	if (num1 == NULL || num2 == NULL)
		return (1);
	num1 = make_arr(argv[1], len1);
	num2 = make_arr(argv[2], len2);
	res = multi(num1, len1, num2, len2);
	while (*res == '0')
		res++;
	for (i = 0; res[i]; i++)
		_putchar(res[i]);
	_putchar('\n');
	free(num1);
	free(num2);
	return (0);
}
/**
 * _atoi - converts a string to an integer
 *@s: string to be converted
 * Return: the number after conversion, or 0
 */
unsigned long _atoi(char *s)
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
/**
 * make_arr - makes an integer array from a string of ints
 * @s: character string
 * @len: length of the string
 *
 * Return: integer array of the string
 */
int *make_arr(char *s, int len)
{
	int *res;

	res = malloc(len * sizeof(int));
	for (; s[len]; len--)
	{
		res[len] = (s[len] - '0');
	}
	return (res);
}
/**
 * multi - multiplies two integer arrays
 * @num1: number 1
 * @num2: number 2
 * @len1: length of array num1
 * @len2: length of array num2
 *
 * Return: string of their multiplication
 */
char *multi(int *num1, int len1, int *num2, int len2)
{
	char *mul;
	char *c;
	char *tmp;
	int i, j, k = 0, x = 0, y;
	long int r = 0;
	unsigned long sum = 0;

	mul = malloc((len1 + len2 + 2) * sizeof(char *));
	c = malloc((len1 + len2 + 2) * sizeof(char *));
	tmp = malloc((len1 * len2 + 2) * sizeof(char *));
	if (mul == NULL || c == NULL || tmp == NULL)
    	{
        	if (mul)
			free(mul);
		if (c)
            		free(c);
        	if (tmp)
            		free(tmp);
        	return (NULL);
	}
	for (i = len2; i >= 0; i--)
	{
		r = 0;
		for (j = len1; j >= 0; j--, k++)
		{
			tmp[k] = (num2[i] * num1[j] + r) % 10;
			r = (num2[i] * num1[j] + r) / 10;
		}
		tmp[k++] = r;
		x++;
		for (y = 0; y < x; y++, k++)
		{
			tmp[k] = 0;
		}
	}
	k = 0;
	r = 0;
	for (i = 0; i < len1 + len2 + 2; i++)
	{
		sum = 0;
		y = 0;
		for (j = 1; j <= len2 + 1; j++)
		{
			if (i <= len1 + j)
				sum += tmp[y + i];
			y += j + len1 + 1;
		}
		c[k++] = (sum + r) % 10;
		r = (sum + r) / 10;
	}
	c[k] = r;
	j = 0;
	for (i = k - 1; i >= 0; i--)
	{
		mul[j++] = c[i] + '0';
	}
	mul[j] = '\0';
	free(c);
	free(tmp);
	return (mul);
}
/**
 * print_err - prints "Error" followed by a newline
 * @s: Error message to print
 * Return: void
 */
void print_err(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
