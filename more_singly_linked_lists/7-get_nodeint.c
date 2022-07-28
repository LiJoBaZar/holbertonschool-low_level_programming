#include "lists.h"
/**
 *get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 *@head: First pointer to the linked list
 *@index: Node number to find
 *Return: Head's node data(n)
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	tmp = head;
	for (i = 0; tmp && i < index; i++)
		tmp = tmp->next;
	if (tmp == NULL)
		return (NULL);

	return (tmp);
}
