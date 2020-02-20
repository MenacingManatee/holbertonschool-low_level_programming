#include "holberton.h"

/**
 * rot13 - encodes/decodes a string into rot13
 *@s: string to be encoded
 * Return: string s
 */
char *rot13(char *s)
{
	int n, i;
	char chars[60] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot[60] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; chars[n] != '\0'; n++)
		{
			if (chars[n] == s[i])
			{
				s[i] = rot[n];
				break;
			}
		}
	}
	return (s);
}
