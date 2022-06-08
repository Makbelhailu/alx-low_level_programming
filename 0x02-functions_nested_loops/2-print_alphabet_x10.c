#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - entry point
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int n;
	char a;

	for (n = 0; n <= 9; n++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			putchar(a);
		}
		putchar('\n');
	}
}
