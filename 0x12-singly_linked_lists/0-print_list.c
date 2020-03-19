#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints the contents of a singly linked list
 * @h: singly linked list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	for (; h->next != 0; i++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
	}
	return (i);
}
