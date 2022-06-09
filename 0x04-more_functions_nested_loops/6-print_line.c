#include <stdio.h>
#include "main.h"
#include <stdio.h>

/**
 * print_line - main
 * @n: takes int
 * Return: 0
 */
void print_line(int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
