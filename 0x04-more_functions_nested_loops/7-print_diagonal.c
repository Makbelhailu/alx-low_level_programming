#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_diagonal - main
 * @n: rakes
 * Return: 0
 */
void print_diagonal(int n)
{
	int x, z;

	for (x = 0; x < n; x++)
	{
		for (z = 0; z <= x - 1; z++)
		{
			_putchar(' ');
		}
		if (n > 0)
		{
		_putchar('\\');
		}
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}

