#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: head of a dlistint_t list.
 * @n: contents of dlistint_t list to be created
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t)), *tmp;

	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (!head || !*head)/*Null check*/
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	tmp = *head;
	for (; (*head)->next; *head = (*head)->next)
		;/*move to the end of the list*/
	new->prev = *head;
	(*head)->next = new;
	*head = tmp;
	return (new);
}
