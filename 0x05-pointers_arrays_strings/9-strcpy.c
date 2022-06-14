#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strcpy - entry
 * @src: source
 * @dest: destination
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
