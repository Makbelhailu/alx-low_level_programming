#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _atoi - convertion
 * @s: string
 * Return: the num
 */
int _atoi(char *s)
{
	int x;

	x = atoi(s);

	if (s == '-')
	{
		x *= -1;
	}
		return (x);
}
