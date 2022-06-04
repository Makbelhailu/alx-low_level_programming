#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0(succes)
 */
int main(void)
{
	int n = 0;
	char m = 'a';

	while (n <= 9)
	{
		putchar(n + '0');
		n++;
	}

	while (m <= 'f')
	{
		putchar(m);
		m++;
	}
	putchar('\n');

	return (0);
}
