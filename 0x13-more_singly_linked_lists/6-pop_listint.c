#include "lists.h"

/**
 * pop_listint - delete node
 * @head: node to be deleted
 * Return: n value
 */
int pop_listint(listint_t **head)
{
	listint_t *cur;
	listint_t *last;
	int h;

	if (head == NULL)
		return (0);
	cur = *head;
	h = cur->n;
	last = cur->next;
	free(last);
	*head = last;
	return (h);
}
