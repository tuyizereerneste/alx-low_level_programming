#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: pointer to hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t  *node;
	int c = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			if (c)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			c = 1;
			node = node->next;
		}
	}
	printf("}\n");
}
