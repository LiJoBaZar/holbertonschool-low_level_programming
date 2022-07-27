#include "lists.h"

/**
 *print_list - Prints all the elements of a list_t list
 *@h: Pointer to the node to print
 *Return: Number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	int i;

	if (h == NULL)
		return (0);

	for (i = 0; h; i++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (i);
}
