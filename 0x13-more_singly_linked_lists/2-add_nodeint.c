#include "main.h"

/**
 * add_nodeint - add node lists
 * @head: the node
 * @n: value
 * Return: p
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (n == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = head;
	*head = new;

	return (*head);
}
