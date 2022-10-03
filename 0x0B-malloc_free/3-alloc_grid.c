#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* alloc_grid - returns a pointer to 2 dimensional array of int
* @width: integer
* @height: integer
* Return: return a pointer to the array or return NULL
**/

int **alloc_grid(int width, int height)
{
	int **a;

	int i;

	int j;

	if (width <= 0 || height <= 0)
		return (NULL);
	a = malloc(sizeof(int *) * height);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		a[i] = malloc(sizeof(int) * width);
		if (a[i] == NULL)
		{
			for (i = i - 1; i >= 0; i--)
			{
				free(a[i]);
			}
			free(a);
			return (NULL);
		}
	}
	for (i = 0; j < width; j++)
		a[i][j] = 0;
	return (a);
}
