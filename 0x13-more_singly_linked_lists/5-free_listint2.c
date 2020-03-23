#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: list to free
 * Return: Always 0 (ok)
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp, *tmp2;

	if (*head == NULL)
		return;

	tmp = *head;
	while (tmp->next != NULL)
	{
		tmp2 = tmp->next;
		free(tmp);
		tmp = tmp2;
	}
	free(tmp);
	*head = NULL;
}
