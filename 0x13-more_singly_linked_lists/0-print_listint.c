#include "lists.h"

/**
 * print_listint - print listint_t
 * @h: input
 * Return: p
 */
size_t print_listint(const listint_t *h)
{
	size_t p;

	p = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		p++;
	}
	return (p);
}
