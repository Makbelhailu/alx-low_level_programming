#include "main.h"

/**
 * get_bit - gets bits
 * @n: num
 * @index: position of num to be displayed
 * Return: num
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (n == 0 && index < 64)
		rrturn (0);
	for (i = 0; i <= 63; n >>= 1, i++)
	{
		if (index == i)
			return (n & 1);
	}
		return (-1);
}
