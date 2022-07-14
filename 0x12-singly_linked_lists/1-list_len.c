#include "lists.h"

/**
 * list_len - return list_t len
 * @h: pointer
 * Return: len
 */
size_t list_len(const list_t *h)
{
	size_t len;

	for (len = 0; h != NULL; len++)
	{
		h = h->next;
	}

	return (len);
}
