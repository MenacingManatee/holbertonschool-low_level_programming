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
	unsigned long int k, i;
	hash_node_t **tmp;

	printf("Bugcheck\n");
	k = hash_djb2((unsigned char *)key) % ht->size;
	tmp = ht->array;

	printf("%d\n", tmp[k] == NULL);
	printf("Before if\n");
	if (tmp[k] != NULL)
	{
		printf("Inside if: %s : %s\n", tmp[k]->key, tmp[k]->value);
		if (tmp[k]->key != NULL)
			if (!strcmp(key, tmp[k]->key))
				return (tmp[k]->value);
	}
	printf("Before loop\n");
	for (i = 0; i < ht->size; i++)
	{
		printf("%d\n", (int)i);
		if (tmp[i] != NULL)
			if (tmp[i]->key != NULL)
				if (!strcmp(key, tmp[i]->key))
					return (tmp[i]->value);
	}
	return (NULL);
}
