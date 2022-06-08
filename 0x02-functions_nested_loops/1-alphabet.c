#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * print_alphabet - entry point
 * *
 * Return: 0
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
}
