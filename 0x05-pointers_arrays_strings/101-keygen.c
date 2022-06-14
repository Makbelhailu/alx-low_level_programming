#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - entey
 * Return: 0
 */
int main(void)
{
	char x[100];
	int y, a, j;

	a = 0;
	j = 0;
	srand(time(NULL));
	while (a < 2645)
	{
		y = rand() % 122;
		if (y > 32)
		{
			x[j++] = y;
			a += y;
		}
	}
	x[j++] = (2772 - a);
	x[j] = '\0';
	printf("%s", x);

	return (0);
}
