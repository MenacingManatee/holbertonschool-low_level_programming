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
	if (d == NULL)
		return;
	if ((*d).name == NULL)
		(*d).name = "(nil)";
	if ((*d).owner == NULL)
		(*d).owner = "(nil)";
	printf("Name: %s\n", (*d).name);
	if (!((*d).age))
		printf("Age: (nil)\n");
	else
		printf("Age: %f\n", (*d).age);
	printf("Owner: %s\n", (*d).owner);
}
