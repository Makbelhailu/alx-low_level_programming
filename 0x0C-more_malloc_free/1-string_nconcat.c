#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - string concatenate
 * @s1: string 1
 * @s2: string 2
 * @n: amount
 * Return: p
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i, size1, size2;
	
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (size1 = 0; s1[size1] != '\0'; size1++)
		;
	for (size2 = 0; s1[size2] != '\0'; size2++)
		;
	if (n >= size2)
		n = size2;
	p = malloc(sizeof(char) * (n + size1 + 1));

	if (p == NULL)
		return (NULL);
	for (i = 0; i < size1; i++)
		p[i] = s1[size1];
	for (; i < (size1 + n); i++)
		p[i] = s2[size2];
	p[i] = '\n';

	return (p);
}
