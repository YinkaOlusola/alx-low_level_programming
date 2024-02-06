#include "hash_table.h"

/**
 * hash_table_get - Retrievs a value associated with a key.
 * @ht: The hash table fromo which an element is to be restored
 * @key: The key of the element to be restored from the hash table.
 *
 * Return: Value associated with the element or NULL if key not found.
 *
 */


char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	node = ht->array[index];
	while (node && strcmp(node->key, key) != 0)
		node = node->next;

	return ((node == NULL) ? NULL : node->value);
}
