#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * jack_bauer - entry point
 *
 * Return: 0
 */
void jack_bauer(void)
{
	int a, b, c, d;

	for (a = 0; a <= 2; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			if (a == 2 && b == 4)
			{
				break;
			}
			for (c = 0; c <= 5; c++)
			{
				for (d = 0; d <= 9; d++)
				{
					printf("%d%d:%d%d\n", a, b, c, d);
				}
			}
		}
	}
}
