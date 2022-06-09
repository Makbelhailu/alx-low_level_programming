#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * _isdigit - main point
 *
 * @c: take ints
 *
 * Return: 0.
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
