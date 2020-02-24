#include "holberton.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: source string
 * @accept: characters to accept
 * Return: Number of bytes in the initial segment of s which consists only
 * of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j = 0;
	int flag = 0;

	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				flag = 1;
				break;
			}
			j++;
		}
		if (flag == 0)
			break;
		else
			flag = 0;
		i++;
	}
	return (i);
}
