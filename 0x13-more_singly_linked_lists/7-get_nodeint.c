#include "lists.h"

/**
 * get_nodeint_at_index( - returns the index node n
 * @head: z node
 * @index: the index
 * Return: *head
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}
	return (head);
}
