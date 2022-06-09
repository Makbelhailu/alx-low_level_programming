#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * print_numbers - print nums
 * Return: 0.
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
