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
	dlistint_t *new = malloc(sizeof(dlistint_t)), *top;

	if (!new)/*malloc failure check*/
		return (NULL);
	new->prev = NULL;
	new->n = n;
	if (!h)
	{
		free(new);
		return (NULL);
	}
	if (idx == 0)
	{
		new->next = (*h);
		if (*h)
			(*h)->prev = new;
		*h = new;
		return (new);
	}
	if (!*h && !((*h)->prev))/*make sure we're actually at the head*/
	{
		for (; (*h)->prev; (*h) = (*h)->prev)
			;
	}
	top = *h;
	for (; i < idx - 1 && (*h) != NULL; i++, (*h) = (*h)->next)
		;/*to get the node we need to insert after*/
	if (*h == NULL)
	{
		*h = top;
		free(new);
		return (NULL);
	}
	new->next = (*h)->next, new->prev = (*h);
	if ((*h)->next)
		(*h)->next->prev = new;
	(*h)->next = new;
	*h = top;
	return (new);
}
