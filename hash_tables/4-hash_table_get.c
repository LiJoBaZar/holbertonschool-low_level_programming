#include "hash_tables.h"
/**
 *hash_table_get - Retrieves a value associated with a key
 *@ht: Pointer to the hash table
 *@key: Key to evaluate in the hash table, if it is
 *taken adds it.
 *Return: 1 if successful, 0 if malloc fails.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *new_n = NULL;

	if (!ht || !key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	new_n = ht->array[index];
	while (new_n)
	{
		if (!strcmp(new_n->key, key))
			return (new_n->value);
		new_n = new_n->next;
	}
	return (NULL);
}
