#include "holberton.h"

int _strlen(char *a);
/**
 * infinite_add - converts two strings to integers and adds them.
 * @n1: First string to add
 * @n2: Second string to add
 * @r: string post addition
 * @size_r: buffer size of r
 * Return: r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int k = 0, i, j, sum = 0, carry = 0, l = 0;
	unsigned int num1, num2;

	r[0] = '\0';
	r[1] = '\0';
	i = _strlen(n1);
	j = _strlen(n2);
	if (i + 2 > size_r || j + 2 > size_r)
		return (0);
	if (i > j)
		k = i + 1;
	else
		k = j + 1;
	r[k] = '\0';
	while (j > 0 || i > 0)
	{
		num1 = 0, num2 = 0;
		if (i > 0)
			num1 = (n1[--i] - '0');
		else
			num1 = 0;
		if (j > 0)
			num2 = (n2[--j] - '0');
		else
			num2 = 0;
		if (carry > 0)
		{
			sum += carry;
			carry = 0;
		}
		if (num1 > 0)
			sum += num1;
		if (num2 > 0)
			sum += num2;
		if (sum > 9)
		{
			sum = sum - 10;
			carry++;
		}
		r[--k] = (sum + '0');
		sum = 0;
	}
	if (carry > 0)
		r[0] = '1';
	else
		r[0] = '\0';
	while (r[l] == '\0')
		l++;
	return (r + l);
}
/**
 * _strlen - finds the length of a string
 * @a: string to find length of
 *
 * Return: length
 */
int _strlen(char *a)
{
	int i = 0;

	while (a[i])
		i++;
	return (i);
}
