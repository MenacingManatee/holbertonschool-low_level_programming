#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at index idx
 * @head: head of list
 * @idx: index to insert node
 *
 * Return: Address of new node, or NULL
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head, *tmp2, *tmp3;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}
	for (; tmp->next != NULL && i < index - 1; i++, tmp = tmp->next)
		;
	tmp2 = tmp->next;
	tmp3 = tmp2->next;
	tmp->next = tmp3;
	free(tmp2);
	return (1);
}
