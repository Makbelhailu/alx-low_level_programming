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
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	
	i++;
	for (i /= 2; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}
	printf("\n");
}
