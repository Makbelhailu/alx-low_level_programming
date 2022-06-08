#include <stdio.h>
#include "main.h"

/**
 * _islower - return 1 if it is lowercase
 *
 * @c: take char
 *
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
