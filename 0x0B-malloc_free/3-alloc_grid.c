#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer of a 2 dimensional array of integers
 * @width: first integer
 * @height: second integer
 * Return: NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **lag;
	int l, m, p, q;


	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	lag = malloc(height * sizeof(int *));
	if (lag == NULL)
	{
		free(lag);
		return (NULL);
	}
	for (l = 0; l < height; l++)
	{
		lag[l] =  malloc(sizeof(int) * width);
		if (lag[l] == NULL)
		{
			for (m = 0; m >= 0; m--)
			{
				free(lag[l]);
			}
			free(lag);
			return (NULL);
		}
	}
	for (p = 0; p < height; p++)
	{
		for (q = 0; q < width; q++)
			lag[p][q] = 0;
	}
	return (lag);
}
