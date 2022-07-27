#include "lists.h"

/**
 *add_nodeint - Adds a new node at the beginning of a list_t list
 *@head: Pointer to the node to print
 *@n: Number to be added to the node
 *Return: Added node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (0);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
