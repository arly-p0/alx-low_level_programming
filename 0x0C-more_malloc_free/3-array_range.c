#include "main.h"
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers
 * @min: minimum value to be stored
 * @max: maximum value to be stored
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *str;
	int y;

	if (min > max)
	{
		return (NULL);
	}
	str = malloc(sizeof(int) * (min - max + 1));
	if (str == NULL)
	{
		return (NULL);
	}
	for (y = 0; min <= max; y++)
	{
		str[y] = min++;
	}
	return (str);
}
