#include "main.h"

/**
 * _putchar - used as putchar
 * @c: z char
 * Return: c
 */
int _putchar(char c)
{
	return (write(1,  &c, 1));
}
