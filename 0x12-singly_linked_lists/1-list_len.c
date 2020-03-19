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

	for (; h->next != 0; i++)
	{
		h = h->next;
	}
	return (++i);
}
