#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	int a, sum = 0;

	for (a = 0; a < 1024; a++)
	{
		if (a % 5 == 0 || a % 3 == 0)
		{
			sum += a;
		}
		else
		{
			sum = sum;
		}
	}
	printf("%d\n", sum);
	return (0);
}
