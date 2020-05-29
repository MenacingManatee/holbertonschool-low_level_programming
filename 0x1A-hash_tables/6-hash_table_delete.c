#include "hash_tables.h"
#include <stdio.h>

void free_node(hash_node_t *node);
/**
 * hash_table_delete - frees a hash table.
 * @ht: the hash table
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t **run, *tmp, *curr;

	if (!ht)
		return;
	run = ht->array;
	for (i = 0; i < ht->size; i++)
	{
		if (run[i])
		{
			for (tmp = run[i]; tmp != NULL;)
			{
				curr = tmp;
				tmp = tmp->next;
				free_node(curr);
			}
		}
	}
	free(ht->array);
	free((void *)ht);
}

/**
 * free_node - frees a node
 * @node: node to free
 *
 * Return: void
 */
void free_node(hash_node_t *node)
{
	free(node->key);
	free(node->value);
	free(node);
}
