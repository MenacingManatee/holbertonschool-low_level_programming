#include "lists.h"
#include <stdio.h>

/**
 * free_listint_safe - prints a listint_t list, even if it loops
 * @h: list to free
 *
 * Return: Number of nodes
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *curr, *tmp, *start;
	int i = 0, j;

	if (h == NULL || *h == NULL)
		return (0);
	curr = start = *h;
	for (; *h; i++)
	{
		curr = start;
		for (j = 0; j < i; j++)
		{
			if (*h == curr && i > 0)
			{
				*h = NULL;
				return (i);
			}
			curr = curr->next;
		}
		tmp = (*h)->next;
		free(*h);
		*h = tmp;
	}
	return (i);
}
