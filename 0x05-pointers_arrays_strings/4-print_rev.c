#include <stdio.h>
#include "main.h"
#include<string.h>

/**
 * print_rev - entry
 * @s: point
 * Return: 0
 */
void print_rev(char *s)
{
	int i, len = strlen(s);

	for (i = len - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
