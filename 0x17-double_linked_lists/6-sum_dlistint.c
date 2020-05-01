#include "lists.h"

/**
 * sum_dlistint - sums the sum of all the data of a dlistint_t linked list
 * @head: a dlistint_t linked list.
 *
 * Return: the sum of all the data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)/*Null check*/
		return (0);
	if (!(head->prev))/*make sure we're actually at the head*/
	{
		for (; head->prev; head = head->prev)
			;
	}
	for (; head; head = head->next)
		sum += head->n;
	return (sum);
}
