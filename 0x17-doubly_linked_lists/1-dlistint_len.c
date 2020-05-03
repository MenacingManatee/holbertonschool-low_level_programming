#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: a linked dlistint_t list.
 *
 * Return: the number of elements in h
 */
size_t dlistint_len(const dlistint_t *h)
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
		;/*Just need to count nodes*/
	return (nodes);
}
