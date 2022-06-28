#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - allocate grid
 * @width: width of grid
 * @height: height of grid
 * Return: out
 */
int **alloc_grid(int width, int height)
{
	int **out;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);
	out = malloc(sizeof(int) * height);
	if (out == NULL)
	{
		free(out);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		out[i] = malloc(sizeof(int) * width);
		if (out[i] == NULL)
		{
			for (i--; i <= 0; i--)
				free(out[i]);
			free(out);
			return (NULL);
		}
		for (j = 0; j <= i; j++)
			out[i][j] = 0;
	}

		return (out);
}
