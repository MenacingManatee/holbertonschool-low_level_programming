#include "hash_tables.h"
#include <string.h>
#include <stdio.h>

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: the hash table you want to look into
 * @key: the key you are looking for
 *
 * Return: the value associated with the element, or NULL if key isn't found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int k;
	hash_node_t **tmp, *check;

	k = hash_djb2((unsigned char *)key) % ht->size;
	tmp = ht->array;

	if (tmp[k] != NULL)
	{
		for (check = tmp[k]; check != NULL; check = check->next)
			if (!strcmp(key, check->key))
				return (check->value);
	}
	return (NULL);
}
