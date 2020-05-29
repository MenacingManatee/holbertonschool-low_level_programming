#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_create - creates an empty hash table of size
 * @size: size of the hash table to create
 *
 * Return: A pointer to the created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *res = calloc(1, sizeof(hash_table_t));
	hash_node_t *head;

	if (res == NULL)
		return (NULL);
	head = calloc(size, sizeof(hash_node_t));
	if (head == NULL)
	{
		free(res);
		return (NULL);
	}
	res->size = size, res->array = &head;
	return (res);
}
