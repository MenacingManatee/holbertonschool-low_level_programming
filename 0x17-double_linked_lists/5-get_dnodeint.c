#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: a dlistint_t linked list.
 * @index: the node to return
 *
 * Return: the node at index [index]
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)/*Null check*/
		return (NULL);
	if (!(head->prev))/*make sure we're actually at the head*/
	{
		for (; head->prev; head = head->prev)
			;
	}
	for (; i < index && head; i++, head = head->next)
		;
	return (head);
}
