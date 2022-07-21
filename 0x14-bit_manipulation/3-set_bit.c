#include "main.h"

/**
 * set_bit - set 1 at the index positionof bites
 * @n: num
 * @index: position
 * Return: total
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > 63)
		return (-1);
	
	m = 1 << index;
	*n = (*n | m);

	return (1);
}
