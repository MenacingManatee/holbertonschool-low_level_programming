#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: list to free
 * Return: Always 0 (ok)
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head)
	{
		tmp = *head;
		while (*head)
		{
			tmp = *head;
			*head = tmp->next;
			free(tmp);
		}
		*head = NULL;
	}
}
