#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * rev_string - entry
 * @s: pointer
 * Return: 0
 */
void rev_string(char *s)
{
	int i, len = strlen(s);

	for (i = len - 1; i <= 0; i--)
	{
		s += s[i];
	}
}
