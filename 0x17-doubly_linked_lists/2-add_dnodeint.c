#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: Head of the dlistint_t list
 * @n: Contents of the node to be added
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	if (!head)
	{
		free(new);
		return (NULL);
	}
	if (!*head)/*Null check*/
	{
		new->next = NULL;
		*head = new;
		return (new);
	}
	if (!((*head)->prev))/*make sure we're actually at the head*/
	{
		for (; (*head)->prev; *head = (*head)->prev)
			;
	}
	new->next = *head;
	(*head)->prev = new;
	*head = new;
	return (new);
}
