#include "lists.h"
#include <stdio.h>

/**
 * free_listint_safe - prints a listint_t list, even if it loops
 * @head: list to free
 *
 * Return: Number of nodes
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *curr = *h, *tmp;
	int i = 0, j;

	if (*h == NULL)
		return (0);
	for (; *h; i++)
	{
		tmp = *h;
		*h = (*h)->next;
		free(tmp);
		for (j = 0; j <= i; j++)
		{
			if (*h == curr)
			{
				*h = NULL;
				return (i);
			}
			curr = curr->next;
		}
	}
	*h = NULL;
	return (i);
}
