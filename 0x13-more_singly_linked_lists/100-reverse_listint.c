#include "lists.h"
#include <stdio.h>

/**
 * reverse_listint - reverses a listint list
 * @head: list to reverse
 *
 * Return: Pointer to new first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp, *rev;

	if (head == NULL || *head == NULL)
		return (NULL);
	tmp = (*head)->next;
	(*head)->next = NULL;
	rev = *head;
	*head = tmp;
	while ((*head)->next != NULL)
	{
		tmp = (*head)->next;
		(*head)->next = rev;
		rev = *head;
		*head = tmp;
	}
	(*head)->next = rev;
	return (*head);
}
