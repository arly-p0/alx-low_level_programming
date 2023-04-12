#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: integer of a width
 * @height: integer of a height
 * Return: NULL if height or width negative is 0.
 */
int **alloc_grid(int width, int height)
{
	int **leng;
	int y, z;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	leng = malloc(sizeof(int *) * height);

	if (leng == NULL)
	{
		free(leng);
		return (NULL);
	}
	for (y = 0; y < height; y++)
	{
		leng[y] = malloc(sizeof(int) * width);
		if (leng[y] == NULL)
		{
			for (z = y; z >= 0; z--)
			{
				free(leng[z]);
			}
			free(leng);
			return (NULL);
		}
	}
	for (y = 0; y < height; y++)
	{
		for (z = 0; z < width; z++)
			leng[y][z] = 0;
	}
	return (leng);
}
