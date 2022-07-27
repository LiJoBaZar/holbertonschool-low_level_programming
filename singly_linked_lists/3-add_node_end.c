#include "lists.h"

/**
 *_strlen - Returns the length of a string
 *@s: is a parameter
 *Return: The length "i"
 */
int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

/**
 *add_node_end - Adds a new node at the beginning of a list_t list
 *@head: Pointer to the linked list
 *@str: String in the new node
 *Return: Node added
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *last_node;
	int i;

	if (head == NULL || str == NULL)
		return (0);

	last_node = *head;
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (0);

	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	for (i = 0; last_node->next; i++)
		last_node = last_node->next;
	last_node->next = new_node;
	return (new_node);
}
