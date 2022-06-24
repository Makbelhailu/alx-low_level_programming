#include <stdio.h>
#include "main.h"

/**
 * main - entry
 * @argc: num of args
 * @argv: name of array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
