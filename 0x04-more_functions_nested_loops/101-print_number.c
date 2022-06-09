#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_number - main
 * @n: take ints
 * Return: 0
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	if (n / 10)
	{
		print_number(n / 10);
	}
	_putchar(n % 10 + '0');
}
