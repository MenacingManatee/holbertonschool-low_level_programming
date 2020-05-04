#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at a given position
 * @head: a pointer to a dlistint_t linked list.
 * @index: the position to add the node
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *nxt, *tmp, *top;

	if (!head || !*head)/*Null check*/
		return (-1);
	if ((*head)->prev)/*make sure we're actually at the head*/
		for (; (*head)->prev; (*head) = (*head)->prev)
			;
	top = *head;
	for (i = 0; i < index && (*head); i++, (*head) = (*head)->next)
		;
	if (!(*head))
	{
		*head = top;
		return (-1);
	}
	tmp = (*head)->prev;
	nxt = (*head)->next;
	free(*head);
	*head = tmp;
	if (*head)/*Check for if we're at the starter NULL*/
		(*head)->next = nxt;
	if (nxt)
	{
		*head = nxt;
		(*head)->prev = tmp;
	}
	for (; *head && (*head)->prev; *head = (*head)->prev)
		;/*move back to the top*/
	return (1);
}
