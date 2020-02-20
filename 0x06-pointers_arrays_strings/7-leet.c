#include "holberton.h"

/**
 * leet - encodes a string into 1337sp34k
 *@s: string to be encoded
 * Return: string s
 */
char *leet(char *s)
{
	int i = 0, n;
	char chars[11] = "aAeEoOtTlL";
	char leet[11] = "4433007711";

	while (s[i])
	{
		for (n = 0; n < 11; n++)
		{
			if (s[i] == chars[n])
				s[i] = leet[n];
		}
		i++;
	}
	return (s);
}
