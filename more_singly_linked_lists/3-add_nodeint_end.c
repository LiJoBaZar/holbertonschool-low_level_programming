#include "lists.h"

/**
 *add_nodeint_end - Adds a new node at the end of a listint_t list.
 *@head: Pointer to the linked list
 *@n: Number in the new node
 *Return: Node added
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_n, *tail;
	int i;

	tail = *head;
	new_n = malloc(sizeof(listint_t));
	if (new_n == NULL)
		return (0);

	new_n->n = n;
	new_n->next = NULL;
	if (*head == NULL)
	{
		*head = new_n;
		return (new_n);
	}
	for (i = 0; tail->next != NULL; i++)
		tail = tail->next;
	tail->next = new_n;
	return (new_n);
}
