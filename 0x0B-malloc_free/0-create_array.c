#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - allocate array
 * @c: char
 * @size: size of it
 * Return: j
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *j;

	if (size == 0)
		return (NULL);
	j = malloc(sizeof(c) * size);

	if (j == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		j[i] = c;

	return (j);
}
