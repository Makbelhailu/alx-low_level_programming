#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - entry
 * @s: char
 * @accept: acceptor
 * Return: s
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		
