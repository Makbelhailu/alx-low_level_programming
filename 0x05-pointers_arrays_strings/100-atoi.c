#include "main.h"
#include <stdio.h>

/**
 * numerical - check digits
 * @n: number
 * Return: 0 or ,1
 */
int numerical(unsigned int n)
{
	return (n >= '0' &&  n <= '9');
}

/**
 * _atoi - convertion
 * @s: string
 * Return: the num
 */
int _atoi(char *s)
{
	unsigned int number, i;
	int sign;

	sign = 1;
	number = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (numerical(s[i]))
		{
			number = (s[i] - 48) + number * 10;
			if (s[i + 1] == ' ')
				break;
		}
		if (s[i] == '-')
			{
				sign *= -1;
			}
	}

		return (number * sign);
}
