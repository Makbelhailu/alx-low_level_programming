#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	char p[8] = "_putchar";
	int i;

	for (i = 0; i <= 7; i++)
	{
		putchar(p[i]);
	}

	putchar('\n');

	return (0);
}
