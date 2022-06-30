#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - check malloc
 * @b: recive int
 * Return: i
 */
void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);
	if (i == NULL)
		exit(98);
	return (i);
}
