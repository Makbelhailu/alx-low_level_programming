#include "lists.h"

/**
 * add_node - adds new node at z beginning
 * @head: pointed
 * @str: a string
 * Return: head
 */
list_t *add_node(list_t **head, const char *str);
{
	list_t *new;
	size_t num;

	new = malloc(sizeof (list_t));
	if (new == NULL)
		return (NULL);
	for (num = 0; str[num]; num++)
		;
	new->len = num;
	new->str = strdup(str);
	new->next = head;
	*head = new;

	return (*head);
}
