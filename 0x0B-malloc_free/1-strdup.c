#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate string
 * @str: take stri g
 * Return: j
 */
char *_strdup(char *str)
{
	char *j;
	int i, l;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	j = (char *)malloc(sizeof(char) * (i + 1));

	if (j == NULL)
		return (NULL);

	for (l = 0; l <= i; j++)
		j[l] = str[l];
	return (j);
}
