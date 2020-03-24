#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: list to free
 * Return: Always 0 (ok)
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp = *head;

	if (*head)
	{
		while (*head != NULL)
		{
			tmp = *head;
			*head = tmp->next;
			free(tmp);
		}
	}
}
