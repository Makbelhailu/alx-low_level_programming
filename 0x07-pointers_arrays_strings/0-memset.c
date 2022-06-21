#include "main.h"
#include <stdio.h>

/**
 * _memset - entry
 * @s: char
 * @b: char
 * @n: int
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}

	return (s);
}
