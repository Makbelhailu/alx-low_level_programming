#include "main.h"

/**
 * clear_bit - make the bite 0 at agiven index
 * @n: num
 * @index: position
 * Return: sum
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > 63)
		return (-1);
	i = 0 << index;
	*n = (*n & i);
	return (1);
}
