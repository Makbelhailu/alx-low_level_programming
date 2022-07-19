#include "lists.h"

/**
 * insert_nodeint_at_index - inset node at z index
 * @head: node
 * @idx: position
 * @n: value
 * Return: new
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *last;
	listint_t *new;

	last = *head;

	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && last != NULL; i++)
		{
			last = last->next;
		}
	}
	if (last == NULL && idx != 0)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		new->next = last->next;
		last->next = new;
	}
	return (new);
}
