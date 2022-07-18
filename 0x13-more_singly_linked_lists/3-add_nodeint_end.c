#include "main.h"

/**
 * add_nodeint_end - add node at the end
 * @head: z node
 * @n: int
 * Return: head
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	temp = *head;
	if (temp == NULL)
		*head = new;
	while (temp != NULL)
	{
		temp->next = new;
	}
	return (*head);
}
