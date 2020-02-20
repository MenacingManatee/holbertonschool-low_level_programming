#include "holberton.h"

/**
 * rot13 - encodes/decodes a string into rot13
 *@s: string to be encoded
 * Return: string s
 */
char *rot13(char *s)
{
	int i = 0, n;
	char chars[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot[52] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (s[i])
	{
		for (n = 0; n < 52; n++)
		{
			if (s[i] == chars[n])
				s[i] = rot[n];
		}
		i++;
	}
	return (s);
}
