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

	for (i = 0; dest[i] != '\0'; ++i)
	{
		src[i] = dest[i];
	}
	src[i] != '\0';
	return (src);
}