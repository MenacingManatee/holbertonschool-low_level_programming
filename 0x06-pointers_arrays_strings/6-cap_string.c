#include "holberton.h"

/**
 * cap_string - capitalizes the first letter of every word
 *@s: string to perform action on
 * Return: string s
 */
char *cap_string(char *s)
{
	int i = 0, n, flag = 1;

	while (s[i])
		i++;
	for (n = 0; n < i; n++)
	{
		if (flag == 1 && (s[n] >= 'a' && s[n] <= 'z'))
		{
			flag = 0;
			s[n] = s[n] - ('a' - 'A');
		}
		else if ((s[n] == ' ') || (s[n] == '\n') || (s[n] == '\t') ||\
			 (s[n] == '.'))
			flag = 1;
		else
			flag = 0;
	}
	return (s);
}
