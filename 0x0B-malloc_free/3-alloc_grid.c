#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - ...
 * @width: ...
 * @height: ...
 * Return: ...
 */

int **alloc_grid(int width, int height)
{
	int i = 0, j, k, l;
	int **a;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	a = malloc(sizeof(int *) * height);

	if (a == NULL)
	{
		free(a);
		return (NULL);
	}

	while (i < height)
	{
		a[i] = malloc(sizeof(int) * width);
		if (a[i] == NULL)
		{
			for (j = i; j >= 0; j--)
			{
				free(a[j]);
			}
			free(a);
			return (NULL);
		}
		i++;
	}
	while (k < height)
	{
		for (l = 0; l < width; l++)
		{
			a[k][l] = 0;
		}
		k++;
	}
	return (a);
}
