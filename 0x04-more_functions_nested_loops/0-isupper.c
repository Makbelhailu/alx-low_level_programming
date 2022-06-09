#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * _isupper - main point
 *
 * Return:0
 *
 * @c: use chars
 */
int _isupper(int c)
{
	if ( c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
