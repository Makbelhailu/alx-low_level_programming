#include "main.h"

/**
 * get_bit - gets bits
 * @n: num
 * @index: position of num to be displayed
 * Return: num
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i;

	if (n >> index)
	{
		i = n >> index;
		return (i & 1);
	}
	else
		return (-1);
}
