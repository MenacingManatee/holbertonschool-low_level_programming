#include "lists.h"

/**
 * add_nodeint - adds a node to the front of a list
 * @head: the list head
 * @n: int to be duplicated into the list
 *
 * Return: Address of new element, or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
