#include <stdio.h>
#include "main.h"

/**
 * _strncat - entry
 * @dest: destination
 * @src: source
 * @n: bytes
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	while (dest[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < n && src[j] != '\0'; ++j, ++i)
	{
		dest[i] = src[j];
	}

	return (dest);
}
