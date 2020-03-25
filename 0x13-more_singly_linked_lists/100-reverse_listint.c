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
	listint_t *tmp, *rev = NULL;

	if (head == NULL)
		return (NULL);
	while (*head)
	{
		tmp = (*head)->next;
		(*head)->next = rev;
		rev = *head;
		*head = tmp;
	}
	(*head) = rev;
	return (*head);
}
