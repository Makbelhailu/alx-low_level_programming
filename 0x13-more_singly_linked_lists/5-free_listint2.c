#include "lists.h"

/**
 * free_listint2 - free node
 * @head: node
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *c;

	if (head != NULL)
	{
		c = *head;
		while ((temp = c) != NULL)
		{
			c = c->next;
			free(temp);
		}
		*head = NULL;
	}
}
