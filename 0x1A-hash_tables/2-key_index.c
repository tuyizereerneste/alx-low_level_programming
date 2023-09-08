#include "hash_tables.h"

/**
 * key_index - get index for key given
 * @key: key (string) to hash
 * @size: size of hash table
 * Return: The index of the key.
 * Description: Uses the djb2 algorithm.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
