#include "hash_tables.h"
#include <string.h>
#include <stdio.h>

hash_node_t *create_node(const char *key, const char *value);
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
	if (head[idx] == NULL)
	{
		head[idx] = create_node(key, value);
		if (!head[idx])
			return (0);
	}
	else
	{
		for (i = 0; i < ht->size && head[i]; i++)
			;
		if (head[i])
			return (0);
		head[i] = create_node(key, value);
		if (head[i] == NULL)
			return (0);
		(head[i])->next = head[i + 1];
	}
	return (1);
}

/**
 * create_node - creates a node
 *
 *
 * Return: The created node
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *node = malloc(sizeof(hash_node_t));

	if (!node)
		return (0);
	node->key = malloc(strlen(key) + 1);
	if (!node->key)
	{
		free(node);
		return (0);
	}
	strcpy(node->key, key);
	if (value != NULL)
	{
		node->value = malloc(strlen(value) + 1);
		if (!node->value)
		{
			free(node->key);
			free(node);
			return (NULL);
		}
		strcpy((node->value), value);
	}
	return (node);
}
