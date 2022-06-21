#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - entry
 * @s: char
 * @accept: acceptor
 * Return: s
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}
		s++;
	}
	return ('\0');
}
