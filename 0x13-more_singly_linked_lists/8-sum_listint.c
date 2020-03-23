#include "lists.h"

/**
 * sum_listint - finds the sum of all int contained in a list
 * @head: List to sum
 *
 * Return: Sum of list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp = head;

	if (head == NULL)
		return (sum);
	for (; tmp; tmp = tmp->next)
		sum += tmp->n;
	return (sum);
}
