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
	int len, i, half;
	char temp;
	int j = strlen(s);

	for (len = 0; s[len] != j; len++)
	{
		half = len / 2;
		i = 0;

		while (half--)
		{
			temp = s[len - i - 1];
			s[i] = temp;
			i++;
		}
	}
}
