#include "main.h"

/**
 * flip_bits - flip bites
 * @n: num
 * @m: other num
 * Return: amout of flip bit
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i;

	for (i; n | m; n >> 1, m >> 1)
	{
		if ((n & 1) != (m & 1))
			i++;
	}
	return (i);
}
