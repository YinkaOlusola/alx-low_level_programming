#include "hash_tablesh"

/**
 * hash_table_create - Creates a hash table.
 * @size: Size of the array of the hash table
 *
 * Return: A pointer to the newly created hash table.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int i;

	ht->size = size;

	ht->array = malloc(sizeof(hash_table_t *) * size);

	if (ht->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ht->array[i] = NULL;

	return (ht);
}
