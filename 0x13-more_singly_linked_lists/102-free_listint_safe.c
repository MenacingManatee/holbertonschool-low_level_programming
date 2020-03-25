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
	listint_t *curr, *tmp;
	int i = 0, j;

	if (h == NULL || *h == NULL)
		return (0);
	curr = *h;
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
