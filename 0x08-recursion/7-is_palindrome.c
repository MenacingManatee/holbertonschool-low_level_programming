#include "holberton.h"

int _strlen(char *s);
int checker(char *s, int len, int count);
/**
 * is_palindrome - checks if the string is a palindrome
 * @s: target string
 * Return: 1 or 0 if palindrome or not, respectively
 */
int is_palindrome(char *s)
{
	int len, check;

	len = _strlen(s) - 1;
	check = checker(s, len, 0);
}
/**
 * _strlen - gets the length of a string
 * @s: input string
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	if (*s)
	{
		s++;
		return (1 + _strlen(s));
	}
	return (0);
}
/**
 * checker - checks if string of length is a palindrome
 * @s: target string
 * @len: length of the string
 * @count: count of times looped
 *
 * Return: 1 if a palindrome, 0 if not
 */
int checker(char *s, int len, int count)
{
	if (*s == s[len] && count < len)
	{
		s++;
		len -= 2;
		count++;
		return (checker(s, len, count));
	}
	if (*s == s[len])
		return (1);
	else
		return (0);
}
