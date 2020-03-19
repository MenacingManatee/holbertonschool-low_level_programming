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
	const list_t *tmp = h;

	for (; tmp; tmp = tmp->next, i++)
	{
		printf("[%d] %s\n", tmp->len, tmp->str);
	}
	return (i);
}
