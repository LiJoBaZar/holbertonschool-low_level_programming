#include "lists.h"
/**
 *sum_listint - Returns the sum of all the data (n) of the linked list.
 *@head: First pointer to the linked list
 *Return: Sum of data(n)
 */
int sum_listint(listint_t *head)
{
	listint_t *tmp;
	int sum = 0;

	if (head == NULL)
		return (0);

	tmp = head;
	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
