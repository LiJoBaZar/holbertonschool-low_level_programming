#include "lists.h"
/**
 *delete_nodeint_at_index - Deletes the node at index of a linked list.
 *@head: First pointer to the linked list
 *@index: Node number to find and delete
 *Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp1;
	listint_t *tmp2;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	tmp1 = *head;
	if (index == 0)
	{
		*head = tmp1->next;
		free(tmp1);
		return (1);
	}
	for (i = 0; i < index - 1; i++)
	{
		if (tmp1 == NULL)
			return (-1);
		tmp1 = tmp1->next;
	}
	tmp2 = tmp1->next;
	tmp1->next = tmp2->next;
	free(tmp2);
	return (1);
}
