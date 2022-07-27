#include "lists.h"
/**
 *free_list - Frees the list.
 *@head: First pointer to the linked list
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
		{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
		}
}
