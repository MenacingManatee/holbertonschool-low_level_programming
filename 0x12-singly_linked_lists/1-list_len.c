#include <stdio.h>
#include "lists.h"

/**
 * list_len - prints the lenght of a singly linked list
 * @h: singly linked list
 *
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;
	const list_t *tmp;

	tmp = h;
	for (; tmp; tmp = tmp->next, i++)
		;
	return (i);
}
