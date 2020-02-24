#include "holberton.h"

/**
 * _strstr - finds needle in haystack
 * @haystack: source string
 * @needle: substring to find
 * Return: pointer to beginning of located substring, or null
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, len = 0, j = 0;

	while (needle[len])
		len++;
	while (*haystack)
	{
		i = 0;
		if (*haystack == needle[0])
		{
			j = 0;
			while (needle[i])
			{
				if (needle[j] == *(haystack + j))
				{
					j++;
					continue;
				}
				else
					break;
			}
		}
		if (j >= len)
		{
			return (haystack);
		}
		haystack++;
	}
	return ('\0');
}
