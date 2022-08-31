#include "hash_tables.h"
/**
 *key_index - Return the index of the key value in the hash
 *@key: String to add to hash table
 *@size: Size of the hash table
 *Return: Index of the key in the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);

	if (size == 0)
		return (0);

	return (hash % size);
}
