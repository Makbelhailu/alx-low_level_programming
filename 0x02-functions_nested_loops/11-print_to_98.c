#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * print_to_98 - entry
 *
 * @n: take ints
 *
 *Return: 0
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 99 - 1)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n++;
		}
	}
	if (n == 98)
	{
		printf("%d", n);
	}
	if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			if (n == 98)
			{
				break;
			}
			n--;
		}
	}
	printf("\n");
}
