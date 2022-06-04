#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	char n = 'a', N = 'A';

	while (n <= 'z')
	{
		putchar(n);
		n++;
	}
	while (N <= 'Z')
	{
		putchar(N);
		N++;
	}
	putchar('\n');

	return (0);
}
