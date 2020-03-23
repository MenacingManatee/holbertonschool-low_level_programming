#include "lists.h"

/**
 * pop_listint - deletes head node and returns its data
 * @head: list to pop
 *
 * Return: Contents of popped node
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *tmp = *head;

	if (*head == NULL)
		return (0);
	n = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;
	return (n);
}
