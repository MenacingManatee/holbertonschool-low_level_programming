#include <stdlib.h>
#include "dog.h"

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

	if (mydog == NULL)
		return (NULL);
	(*mydog).name = name;
	(*mydog).age = age;
	(*mydog).owner = owner;
	return (mydog);
}
