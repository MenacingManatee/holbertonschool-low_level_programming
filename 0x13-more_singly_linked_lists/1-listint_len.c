#include <stdio.h>
#include "lists.h"

/**
 * listint_len - finds the number of elements in a listint_t list
 * @h: head of linked list
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;
	const listint_t *tmp = h;

	for (; tmp; tmp = tmp->next, i++)
		;
	return (i);
}
