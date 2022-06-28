#include <stdlin.h>
#include "main.h"

/**
 * str_concat - concat the string
 * @s1: first string
 * @s2: second string
 * Return: out
 */
char *str_concat(char *s1, char *s2)
{
	char *out;
	unsigned int i, j, k, stop;

	if (s2 == NULL)
		s2 = "";
	if (s1 == NULL)
		s1 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	out = (char *)malloc(sizeof(char) * (i + j + 1));

	if (out == NULL)
	{
		free(out);
		return (NULL);
	}
	stop = j;
	for (k = 0; k < i; k++)
		out[k] = s1[k];
	for (j = 0; j <= stop; k++, j++)
		out[k] = s2[j];

	return (out);
}
