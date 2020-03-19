#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list_t list.
 * @head: list to free
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *tmp;
	int i = 0;

	if (head == NULL)
		return;
	for (; head->next != NULL; i++)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
	free(head->str);
	free(head);
}
