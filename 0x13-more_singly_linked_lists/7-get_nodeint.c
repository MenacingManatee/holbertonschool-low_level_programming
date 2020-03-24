#include "lists.h"

/**
 * get_nodeint_at_index - finds the contents of node[index]
 * @head: head of linked list
 * @index: node index to return
 *
 * Return: Node at index index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	tmp = head;
	for (; tmp != NULL && i < index; i++)
	{
		tmp = tmp->next;
	}
	return (tmp);
}
