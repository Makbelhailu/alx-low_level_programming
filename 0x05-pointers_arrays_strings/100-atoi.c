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
	int x, i;

	for (i = 0; s[i] != '\0'; i++)
		;
	x = atoi(s[i]);

	if (s[i] == '-')
	{
		x *= -1;
	}
		return (x);
}
