#include <stdio.h>
#include "main.h"

/**
 * more_numbers - print 10x of 1-14
 * Return: 0
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			printf("%d", j);
		}
		_putchar('\n');
	}
}
