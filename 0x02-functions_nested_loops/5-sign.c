#include <stdio.h>
#include "main.h"

/**
 * print_sign - entry point
 *
 * @n: take ints
 *
 * Return: 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	if (n == 0)
	{
		putchar('0');
		return (0);
	}
	else
	{
		putchar('-');
		return (-1);
	}
}
