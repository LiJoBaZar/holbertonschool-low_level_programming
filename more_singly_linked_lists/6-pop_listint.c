#include "lists.h"
/**
 *pop_listint - Deletes the head node of a listint_t linked list
 *@head: First pointer to the linked list
 *Return: Head's node data(n)
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int num;

	if (*head == NULL)
		return (0);

	tmp = (*head)->next;
	num = (*head)->n;
	free(*head);
	*head = tmp;

	return (num);
}
