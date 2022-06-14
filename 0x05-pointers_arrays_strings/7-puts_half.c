#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * puts_half - entry
 * @str: pointer
 * Return: 0
 */
void puts_half(char *str)
{
	int i = 0;
	int len = strlen(str) / 2;

	while (str[i] != '\0')
	{
		if (i >= len)
		{
			printf("%c", str[i]);
		}
		i++;
	}
	printf("\n");
}
