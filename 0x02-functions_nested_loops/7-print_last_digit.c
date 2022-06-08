#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - entry point
 *
 * @c: take ints
 *
 * Return: 0
 */
int print_last_digit(int c)
{
	c = abs(c);

	_putchar(c % 10 + '0');

	return (c % 10);
}
