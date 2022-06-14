#include "main.h"
#include <stdio.h>

/**
 * print_array - entry
 * @a: pointer
 * @n: pointer
 * Return: 0
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n - 1; i++)
	{
		if (i > 0)
		{
			printf(", ");
		}
		printf("%d", a[i]);
	}
	putchar('\n');
}
