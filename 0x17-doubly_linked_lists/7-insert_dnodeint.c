#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: a pointer to a dlistint_t linked list.
 * @idx: the position to add the node
 * @n: The data contained in the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new = malloc(sizeof(dlistint_t)), *top, *next;

	if (!new)/*malloc failure check*/
		return (NULL);
	if (!h || !*h)/*Null check*/
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	if (!((*h)->prev))/*make sure we're actually at the head*/
	{
		for (; (*h)->prev; (*h) = (*h)->prev)
			;
	}
	top = *h;
	for (; i < idx - 1 && (*h); i++, (*h) = (*h)->next)
		;/*-1 to get the node before the one we need*/
	if (!*h)
	{
		free(new);
		return (NULL);
	}
	next = (*h)->next;
	(*h)->next = new;
	new->prev = *h;
	new->next = next;
	*h = next;
	(*h)->prev = new;
	*h = top;
	return (new);
}
