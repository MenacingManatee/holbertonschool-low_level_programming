#include "lists.h"

/**
 * print_dlistint - prints a doubly linked list
 * @h: head of the dlintint
 *
 * Return: The number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int nodes;

	if (!h)/*Null check*/
		return (0);
	if (!(h->prev))/*make sure we're actually at the head*/
	{
		for (; h->prev; h = h->prev)
			;
	}
	for (nodes = 0; h; h = h->next, nodes++)
		printf("%d\n", h->n);
	return (nodes);
}
