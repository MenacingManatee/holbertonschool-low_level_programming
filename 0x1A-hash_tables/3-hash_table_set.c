#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table
 * @key: key to add
 * @value: value associated with key
 *
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int k, idx, i;
	hash_node_t **head;

	if (!ht || !key || key[0] == '\0')
		return (0);
	k = hash_djb2((unsigned char *)key);
	idx = k % ht->size;
	head = ht->array;
	if (!head[idx])
	{
		head[idx] = malloc(sizeof(hash_node_t));
		if (!head[idx])
			return (0);
		(head[idx])->key = malloc(strlen(key));
		if (!(head[idx])->key)
		{
			free(head[idx]);
			head[idx] = NULL;
			return (0);
		}
		strcpy((head[idx])->key, key);
		if (!value)
		{
			(head[idx])->value = malloc(strlen(value));
			if (!(head[idx])->value)
				return (0);
			strcpy((head[idx])->value, value);
		}
		(head[idx])->next = (head[idx + 1]);
	}
	else
	{
		for (i = 0; i < ht->size && !head[i]; i++)
			;
		
	return (1);
}
