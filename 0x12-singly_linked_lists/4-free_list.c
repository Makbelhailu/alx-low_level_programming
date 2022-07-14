#include "lists.h"

/**
 * free_list - free lists
 * @head: lists
 */
void free_list(list_t *head)
{
	list_t *h;

	while ((h = head) != NULL)
	{
		head = head->next;
		free(h->str);
		free(h);
	}
}
