#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * times_table - entry point
 *
 * Return: 0
 */
void times_table(void)
{
	int sum, i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			sum = i * j;

			printf("%d", sum);
			if (j != 9)
			{
				printf(",");
			}
			if (sum < 5 && j != 9)
			{
				printf("  ");
			}
			if (sum >= 5 && j != 9)
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}
