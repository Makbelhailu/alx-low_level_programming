#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - entry
 * @argc: num of arg
 * @argv: name
 * Return: 1 or 0
 */
int main(int argc, char *argv[])
{
	int i, j, length, sum = 0;
	char *ptr;

	if (argc < 2)
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			ptr = argv[i];
			length = strlen(ptr);
			for (j = 0; j < length; j++)
			{
				if (isdigit(*(ptr + j)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
