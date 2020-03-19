#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a node to the end of the list
 * @head: head of the list
 * @str: string to dupe
 * Return: Address of new element or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int leng = 0;
	list_t *new, *tmp;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	for (; str[leng]; leng++)
		;
	new->str = strdup(str);
	new->len = leng;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		tmp = *head;
		for (; tmp->next != NULL; leng++)
		{
			tmp = tmp->next;
		}
		tmp->next = new;
	}
	return (tmp);
}
