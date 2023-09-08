#include "hash_tables.h"

/**
 * hash_table_get - function to retrieve value associeted with key
 * @ht: pointer to hash table
 * @key: key to retrive value
 * Return: value or NULL if key does not exit.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (!ht || !key || !*key)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];
	while (node)
	{
		if (!strcmp(key, node->key))
			return (node->value);
		node = node->next;
	}
	return (NULL);
}


