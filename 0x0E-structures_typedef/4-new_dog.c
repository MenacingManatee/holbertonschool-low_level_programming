#include <stdlib.h>
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
	struct dog *mydog = malloc(sizeof(mydog));
	char *tmpname = malloc(_strlen(name) * sizeof(char));
	char *tmpowner = malloc(_strlen(owner) * sizeof(char));

	_strcpy(tmpname, name);
	_strcpy(tmpowner, owner);
	if (mydog == NULL)
		return (NULL);
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
