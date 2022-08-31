#include "hash_tables.h"

/**
 *shash_table_create - function that creates a hash table.
 *@size: unsigned long int input, size of hash table
 *Return: pointer to the newly created hash table or
 *If something went wrong, your function should return NULL
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int i;
	shash_table_t *new_ht;

	if (!size)
		return (NULL);

	new_ht = malloc(sizeof(hash_table_t));
	if (!new_ht)
		return (NULL);

	new_ht->array = malloc(size * sizeof(hash_node_t *));
	if (!new_ht->array)
	{
		free(new_ht);
		return (NULL);
	}

	new_ht->size = size;
	for (i = 0; i < size; i++)
	{
		new_ht->array[i] = NULL;
	}
	return (new_ht);
}

/**
 * shash_table_set - function that adds an element to the hash table.
 * @ht: shash_table_t pointer input
 * @key: const char pointer input
 * @value: const char pointer input
 * Return: 1 if it succeeded, 0 otherwise
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *tmp, *new_node;

	if (!key || !value || !ht)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	if (tmp)
	{
		while (tmp)
		{
			if (!strcmp(key, tmp->key))
			{
				tmp->value = strdup(value);
				return (1);
			}
			tmp = tmp->next;
		}
	}

	new_node = malloc(sizeof(shash_node_t));
	if (!new_node)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}

/**
 * shash_table_get - function that retrieves a value associated with a key.
 * @ht: shash_table_t pointer input
 * @key: const char pointer input
 * Return: the value associated with the element,
 * or NULL if key couldn’t be found
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *tmp;

	if (!key || !ht)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];

	if (!tmp)
		return (NULL);

	while (tmp)
	{
		if (!strcmp(tmp->key, key))
			break;
		tmp = tmp->next;
	}

	if (!tmp)
		return (NULL);

	return (tmp->value);
}

/**
 * shash_table_print - function that prints a hash table.
 * @ht: shash_table_t pointer input
 * Return: Nothing
 */

void shash_table_print(const shash_table_t *ht)
{
	unsigned long int i, first = 1;
	shash_node_t *tmp;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		if (tmp)
		{
			if (!first)
				printf(", ");
			while (tmp)
			{
				printf("'%s': '%s'", tmp->key, tmp->value);
				tmp = tmp->next;
			}
			first = 0;
		}
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - function that prints a hash table.
 * @ht: shash_table_t pointer input
 * Return: Nothing
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	unsigned long int i, first = 1;
	shash_node_t *tmp;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		if (tmp)
		{
			if (!first)
				printf(", ");
			while (tmp)
			{
				printf("'%s': '%s'", tmp->key, tmp->value);
				tmp = tmp->next;
			}
			first = 0;
		}
	}
	printf("}\n");
}

/**
 * shash_table_delete - function that deletes a hash table.
 * @ht: shash_table_t pointer input
 * Return: Nothing
 */

void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *tmp, *aux;

	if (!ht)
		return;

	if (!ht->array)
	{
		free(ht);
		return;
	}

	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			aux = tmp;
			tmp = tmp->next;
			free(aux->key);
			free(aux->value);
			free(aux);
		}
	}

	free(ht->array);
	free(ht);
}
