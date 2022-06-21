#include "main.h"
#include <stdio.h>

/**
 * _strspn - entry
 * @s:char
 * @accept: acceptor
 * Return: s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				bytes++;
				break;
			}
			else if (accept[ + 1] == '\0')
				return (bytes);
		}
		s++;
	}
	return (bytes);
}
