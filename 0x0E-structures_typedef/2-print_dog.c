#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints all members of a dog struct
 * @d: structure to print
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	printf("Name: %s\nAge: %f\nOwner: %s\n", (*d).name, (*d).age,
	       (*d).owner);
}
