#include "lists.h"
/**
 *insert_nodeint_at_index - Inserts a new node at a given position
 *@head: First pointer to the linked list
 *@idx: Node number to find and put new one
 *@n: Data to put in the new node added
 *Return: Pointer to the added node.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp;
	listint_t *new;
	unsigned int i;

	tmp = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		*head = new;
		new->next = tmp;
		return (new);
	}
	for (i = 0; tmp && i < idx - 1; i++)
	tmp = tmp->next;
	if (tmp == NULL)
		return (NULL);
	new->next = tmp->next;
	tmp->next = new;
	return (new);
}
