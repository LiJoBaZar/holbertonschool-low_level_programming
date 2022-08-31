#include "hash_tables.h"
/**
 *hash_table_set - Adds a new element to the hast table
 *@ht: Pointer to the hash table
 *@key: Key to evaluate in the hash table, if it is
 *taken adds it.
 *@value: Value to add at the key
 *Return: 1 if successful, 0 if malloc fails.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *new_n = NULL, *tmp = NULL;

	if (!ht || !key || !ht->array || !ht->size || key[0] == '\0')
		return (0);
	if (strlen(value) == 0)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp)
	{
		if (!strcmp(tmp->key, key))
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (1);
		}
		tmp = tmp->next;
	}
		new_n = calloc(1, sizeof(hash_node_t));
		if (new_n == NULL)
			return (0);

		new_n->key = strdup(key);
		new_n->value = strdup(value);

		if (ht->array[index] != NULL)
		{
			new_n->next = ht->array[index];
			ht->array[index] = new_n;
		}

		else
		{
			ht->array[index] = new_n;
			new_n->next = NULL;
		}
	return (1);
}
