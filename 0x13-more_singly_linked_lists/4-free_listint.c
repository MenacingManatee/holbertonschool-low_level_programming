#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: list to free
 * Return: Always 0 (ok)
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;
	int i = 0;

	if (head == NULL)
		return;

	for (; head->next != NULL; i++)
	{
		tmp = head->next;free(head);
		head = tmp;
	}
	free(head);
}
