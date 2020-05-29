#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - prints a hash table.
 * @ht: the hash table
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, flag = 0;
	hash_node_t **run, *tmp;

	if (!ht)
		return;
	run = ht->array;
	putchar('{');
	for (i = 0; i < ht->size; i++)
	{
		if (run[i])
		{
			if (flag == 1)
				putchar(',');
			for (tmp = run[i]; tmp != NULL; tmp = tmp->next)
			{
				if (flag == 1)
					putchar(' ');
				printf("'%s': '%s'", tmp->key, tmp->value);
				flag = 1;
			}
		}
	}
	printf("}\n");
}
