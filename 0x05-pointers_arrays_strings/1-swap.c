#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * swap_int - entry point
 * @a: pointer
 * @b: pointer
 * Return:0
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	int d = *b;

	*b = c;
	*a = d;
}
