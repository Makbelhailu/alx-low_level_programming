#include "main.h"
#include <stdio.h>

/**
 * rot13 - change strings into rot form
 * @s: string
 * Return: s
 */
char *rot13(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 13;
		}
		if (s[i] >= 'A' && s[i] <= 'Z')
		{
			s[i] = s[i] - 13;
		}
	}
	return (s);
}
