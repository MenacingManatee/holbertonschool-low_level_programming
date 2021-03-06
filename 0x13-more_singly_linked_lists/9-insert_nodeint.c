#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at index idx
 * @head: head of list
 * @idx: index to insert node
 * @n: contents of node
 *
 * Return: Address of new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *tmp, *tmp2;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	tmp = *head;
	new->n = n;
	if (idx == 0 || *head == NULL)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	for (; tmp != NULL && i < idx - 1; i++, tmp = tmp->next)
		;
	if (tmp == NULL)
		return (NULL);
	tmp2 = tmp->next;
	new->next = tmp2;
	tmp->next = new;
	return (new);
}
