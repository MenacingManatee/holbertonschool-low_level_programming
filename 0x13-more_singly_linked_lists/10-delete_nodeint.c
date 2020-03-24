#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at index idx
 * @head: head of list
 * @index: index to insert node
 *
 * Return: Address of new node, or NULL
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *tmp2, *tmp3;
	unsigned int i = 0;

	if (head == NULL)
		return (-1);

	tmp = *head;

	if (index == 0 && *head == NULL)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}

	for (; tmp->next != NULL && i < index - 1; i++, tmp = tmp->next)
		;

	if (tmp == NULL)
		return (-1);

	tmp2 = tmp->next;
	tmp3 = tmp2->next;
	tmp->next = tmp3;
	free(tmp2);

	return (1);
}
