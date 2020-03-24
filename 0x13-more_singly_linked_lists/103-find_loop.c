#include "lists.h"
#include <stdio.h>

/**
 * find_listint_loop - prints a listint_t list, even if it loops
 * @head: list to print
 *
 * Return: Address of node where loop starts
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *curr, *check;
	size_t i = 0, j;

	if (head == NULL)
		return (NULL);
	curr = head;
	while (curr)
	{
		check = head;
		for (j = 0; j < i; j++)
		{
			if (check == curr)
			{
				return (check);
			}
			check = check->next;
		}
		curr = curr->next;
		i++;
	}
	return (NULL);
}
