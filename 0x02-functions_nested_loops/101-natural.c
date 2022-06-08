#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	int a, sum;

	for (a = 0; a < 1024; a++)
	{
		if (a % 3 || a % 5)
		{
			sum += a;
			a++;
		}
		else
		{
			a++;
		}
	}
	printf("%d\n", sum);
	return (0);
}
