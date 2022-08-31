#include "hash_tables.h"
/**
 *shash_table_create - Create a hash table with the size
 *@size: Size of the hash table
 *Return: Pointer to the hash table
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table;

	if (size == 0)
		return (NULL);
	table = malloc(sizeof(shash_table_t));
	if (table == NULL)
		return (NULL);
	table->size = size;
	table->array = calloc(size, sizeof(shash_node_t *));
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	return (table);
}

/**
 *shash_table_set - Adds a new element to the hast table
 *@ht: Pointer to the hash table
 *@key: Key to evaluate in the hash table, if it is
 *taken adds it.
 *@value: Value to add at the key
 *Return: 1 if successful, 0 if malloc fails.
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	shash_node_t *new_n = NULL, *tmp = NULL;

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
	new_n = calloc(1, sizeof(shash_node_t));
	if (new_n == NULL)
		return (0);
	new_n->key = strdup(key);
	new_n->value = strdup(value);
	new_n->next = ht->array[index], ht->array[index] = new_n;
	sortnode(&(ht->shead), &(ht->stail), new_n);
	return (1);
}
/**
 *shash_table_get - Retrieves a value associated with a key
 *@ht: Pointer to the hash table
 *@key: Key to evaluate in the hash table, if it is
 *taken adds it.
 *Return: 1 if successful, 0 if malloc fails.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	shash_node_t *new_n = NULL;

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

/**
 *shash_table_print - Prints a hash table
 *@ht: Pointer to the hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *new_n = NULL;
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

/**
 *shash_table_print_rev - Prints a hash table backwards
 *@ht: Pointer to the hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *new_n = NULL;
	int flag = 0;

		if (!ht)
			return;

	putchar('{');
	new_n = ht->stail;
	while (new_n)
	{
		if (flag == 1)
			printf(", ");
		printf("'%s': '%s'", new_n->key, new_n->value);
		flag = 1;
		new_n = new_n->sprev;
	}
	printf("}\n");
}
/**
 *shash_table_delete - Deletes a hash table
 *@ht: Pointer to the hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i = 0;
	shash_node_t *tmp = NULL, *next = NULL;

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

/**
 *sortnode - Sorts de nodes using doublylinked list
 *@head: Pointer to the hash table head
 *@tail: Pointer to the hash table tail
 *@new: Node to be sorted
 */
void sortnode(shash_node_t **head, shash_node_t **tail, shash_node_t *new)
{
	if (*head == NULL || strcmp(new->key, (*head)->key) < 0)
	{
		new->snext = *head;
		new->sprev = NULL;
	if (*head)
		(*head)->sprev = new;
	else
			*tail = new;
		*head = new;
	}
	else
	{
		new->snext = *head;
		while (new->snext && new->snext->snext &&
				strcmp(new->key, new->snext->snext->key) > 0)
			new->snext = new->snext->snext;
		new->sprev = new->snext;
		if (new->snext->snext)
			new->snext->snext->sprev = new;
		else
			*tail = new;
		new->snext = new->snext->snext;
		new->sprev->snext = new;
	}
}
