#include "lists.h"

/**
 *print_listint - Prints all the elements of a listint_t list
 *@h: Pointer to the node to print
 *Return: Number inside of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	int i;

	if (h == NULL)
		return (0);

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
