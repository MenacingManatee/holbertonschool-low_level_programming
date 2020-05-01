#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: a dlistint_t list to be freed
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (!head)/*Null check*/
	{
		return;
	}
	if (!(head->prev))/*make sure we're actually at the head*/
	{
		for (; head->prev; head = head->prev)
			;
	}
	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
