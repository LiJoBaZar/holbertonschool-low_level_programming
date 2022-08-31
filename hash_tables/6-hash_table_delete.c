#include "hash_tables.h"
/**
 *hash_table_delete - Deletes a hash table
 *@ht: Pointer to the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *tmp = NULL, *next = NULL;

	if (!ht || !ht->array)
		return;
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp)
		{ 
		free(tmp->key);
		free(tmp->value);
		next = tmp->next;
		free(tmp);
		tmp = next;
		}
	}
	free(ht->array);
	free(ht);
}
