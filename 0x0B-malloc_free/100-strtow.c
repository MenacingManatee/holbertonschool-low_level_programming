#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>

int word_count(char *str);
/**
 * strtow - makes an array of strings seperated into words
 * @str: string to seperate
 *
 * Return: Null if failed, pointer to the array otherwise
 */
char **strtow(char *str)
{
	char **word;
	int i, blank, len, j = 0, flag = 0, flag2 = 0;

	if (str == NULL || *str == '\0')
		return (NULL);
	blank = word_count(str);
	if (blank == 0)
		return (NULL);
	word = malloc(++blank  * sizeof(char *));
	if (word == NULL)
	{
		free(word);
		return (NULL);
	}
	for (i = 0, len = 0; str[len]; len++)
	{
		if (str[len] == ' ')
		{
			if (str[len + 1] == ' ')
			{
				flag = 1;
				continue;
			}
			if (j != 0)
			{
				if (flag != 1 || flag2 == 1)
					i++;
				flag = 0;
				word[i] = malloc(sizeof(char) * (j + 1));
				flag2 = 1;
				if (word[i] == NULL)
				{
					for (len = 0; len <= i; len++)
						free(word[i]);
					free(word);
					return (NULL);
				}
				j = 0;
			}
		}
		else
			j++;
	}
	flag = 0;
	for (i = 0, j = 0, len = 0; str[len]; len++)
	{
		if (str[len] == ' ')
		{
			if (str[len + 1] == ' ')
				;
			else
			{
				if (flag == 1)
				{
					word[i][j] = '\0';
					i++;
					j = 0;
				}
			}
			continue;
		}
		word[i][j] = str[len];
		flag = 1;
		j++;
	}
	word[++i] = NULL;
	return (word);
}

/**
 * word_count - counts the number of words in a string
 * @str: input string
 * Return: number of words
 */
int word_count(char *str)
{
	int i, num = 0;

	for (i = 0; str[i]; i++)
	{
		if (*str == ' ')
			str++;
		else
		{
			for (; str[i] != ' ' && str[i]; i++)
			{
				i++;
			}
			num++;
		}
	}
	return (num);
}
