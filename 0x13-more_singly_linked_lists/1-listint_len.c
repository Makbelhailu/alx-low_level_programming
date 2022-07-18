#include "main.h"

/**
 * listint_len - return listint length
 * @h: input
 * Return: p
 */
size_t listint_len(const listint_t *h)
{
	size_t p = 0;

	while (h != NULL)
	{
		h = h->next;
		p++;
	}
	return (p);
}
