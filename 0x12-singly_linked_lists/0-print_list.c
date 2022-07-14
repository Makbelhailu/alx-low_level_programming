#include "lists.h"

/**
 * print_list - print all the size of list_t
 * @h: pointer
 * Return: size of list_t
 */
size_t print_list(const list_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, (nil));
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		num++;
	}
	return (num);
}