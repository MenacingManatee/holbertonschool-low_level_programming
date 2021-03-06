#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

int _strlen(char *s);
void _strcpy(char *dest, char *src);
/**
 * new_dog - creates a new dog
 * @name: dog name
 * @age: dog ag4e
 * @owner: dog owner
 *
 * Return: Pointer to a dog_t struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *mydog = malloc(sizeof(dog_t));
	char *tmpname;
	char *tmpowner;

	if (mydog == NULL)
		return (NULL);
	tmpname = malloc((_strlen(name) + 1) * sizeof(char));
	if (tmpname == NULL)
	{
		free(mydog);
		return (NULL);
	}
	tmpowner = malloc((_strlen(owner) + 1) * sizeof(char));
	if (tmpowner == NULL)
	{
		free(tmpname);
		free(mydog);
		return (NULL);
	}
	_strcpy(tmpname, name);
	_strcpy(tmpowner, owner);
	(*mydog).name = tmpname;
	(*mydog).age = age;
	(*mydog).owner = tmpowner;
	return (mydog);
}
/**
 * _strlen - finds the length of an input string
 * @s: input string
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		;
	return (i);
}
/**
 * _strcpy - copies src string to dest
 * @dest: destination string
 * @src: source string
 *
 * Return: void
 */
void _strcpy(char *dest, char *src)
{
	int i = 0;

	for (; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
}
