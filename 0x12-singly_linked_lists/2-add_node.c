#include <stdio.h>
#include "lists.h"
#include <string.h>

/**
 * add_node - adds a node to the front of a list
 * @head: the list head
 * @str: string to be duplicated into the list
 *
 * Return: Address of new element, or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	int leng = 0;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	for (; *(str + leng); leng++)
		;
	new->str = strdup(str);
	new->len = leng;
	new->next = *head;
	*head = new;
	return (*head);
}
