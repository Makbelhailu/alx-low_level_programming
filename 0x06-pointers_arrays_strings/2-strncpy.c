#include <stdio.h>
#include "main.h"

/**
 * _strncpy - copy string
 * @dest: destination
 * @src: source
 * @n: bytes
 * Return: src
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && dest[i] != '\0'; i++)
	{
		dest[i] = src[i];
		for ( ; i < n; i++)
		{
			dest[i] = '\0';
		}
	}
	return (dest);
}
