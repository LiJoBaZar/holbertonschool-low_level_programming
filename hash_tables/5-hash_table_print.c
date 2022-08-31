#include "hash_tables.h"
/**
 *hash_table_print - Prints a hash table
 *@ht: Pointer to the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *new_n = NULL;
	int flag = 0;

	if (!ht)
		return;

	putchar('{');
	for (i = 0; i < ht->size; i++)
	{
		new_n = ht->array[i];
		while (new_n)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", new_n->key, new_n->value);
			flag = 1;
			new_n = new_n->next;
		}
	}
	printf("}\n");
}
