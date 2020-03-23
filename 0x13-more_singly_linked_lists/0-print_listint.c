#include <stdio.h>
#include "lists.h"
/**
 * print_listint - prints all elements of a listint_t list
 *
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;
	const listint_t *tmp;

	if (h == NULL)
		return (0);
	tmp = h;
	for (; tmp; tmp = tmp->next, i++)
	{
		printf("%d\n", tmp->n);
	}
	return (i);
}
