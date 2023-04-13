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
	int l, m;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}
	leng = malloc(sizeof(int *) * height);
	if (leng == NULL)
	{
		return (NULL);
	}
	for (l = 0; l < height; l++)
	{
		leng[l] = malloc(sizeof(int) * width);
		if (leng[l] == NULL)
		{
			free(leng);
			for (m = 0; m <= l; m++)
			{
				free(leng[l]);
			}
			return (NULL);
		}
	}
	for (l = 0; l < height; l++)
	{
		for (m = 0; m < width; m++)
		{
			leng[l][m] = 0;
		}
	}
	return (leng);
}

