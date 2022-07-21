#include "main.h"

/**
 * get_endianness - gets 3dian
 * Return: 1 if litil or 0 if big
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c;

	c = (char *) &i;
	return ((int)*c);
}
