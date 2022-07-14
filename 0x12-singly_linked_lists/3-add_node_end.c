#include "lists.h"

/**
 * add_node_end - add node at z end
 * @head: node
 * @str: strings
 * Return: head
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	size_t num;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);

	for (num = 0; str[num]; num++)
		;

	new->len = num;
	new->next = NULL;
	temp = *head;
	if (temp == NULL)
		*head = new;
	else
	{
		while ((temp->next) != NULL)
		{
			temp = temp->next;
			temp->next = new;
		}
	}
	return (*head);
}
