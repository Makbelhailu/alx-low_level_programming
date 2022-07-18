#include "lists.h"

/**
 * print_listint - print listint_t
 * @h: input
 */
size_t print_listint(const listint_t *h)
{
	size_t p;

	while(h != NULL)
	{
		printf("%d\n", h->n);
		h=h->next;
		p++;
	}
	return (p);
}
