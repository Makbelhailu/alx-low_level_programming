#include "main.h"

/**
 * binary_to_uint - binary to decimal
 * @b: z binary
 * Return: int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int d;
	int i, w;

	if (b == NULL)
		return (0);

	d = 0;
	for (i = 0; d[i] != '\0'; i++)
		;
	for (i--, w = 1; i >= 0; i--, w *= 2)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] & 1)
			d += w;
	}
	return (d);
}
