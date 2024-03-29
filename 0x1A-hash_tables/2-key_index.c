#include "hash_tables.h"

/**
 * key_index - Gives the index of a key
 * @key: key is the key whose index is to be found.
 * @size: Size of the hash table.
 *
 * Return: The index of the key.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
