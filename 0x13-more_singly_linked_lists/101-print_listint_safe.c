#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - prints a listint_t list, even if it loops
 * @head: list to print
 *
 * Return: Number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *curr, *check;
	size_t i = 0, j;

	if (head == NULL)
		exit(98);
	curr = head;
	while (curr)
	{
		check = head;
		for (j = 0; j < i; j++)
		{
			if (check <= curr)
			{
				printf("-> [%p] %d\n", (void *)curr, curr->n);
				return (i);
			}
			check = check->next;
		}
		printf("[%p] %d\n", (void *)curr, curr->n);
		curr = curr->next;
		i++;
	}
	return (i);
}
