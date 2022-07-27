#include "lists.h"

/**
 *listint_len - Returns the number of elements in a linked listint_t list
 *@h: Pointer to the node to print
 *Return: Number of nodes in the list
 */
size_t listint_len(const listint_t *h)
{
	int i;

	if (h == NULL)
		return (0);

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
