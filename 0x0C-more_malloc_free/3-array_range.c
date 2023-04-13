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
	int y = 0, l;

	if (min > max)
	{
		return (NULL);
	}
	l = max - min + 1;
	str = malloc(sizeof(int) * l);
	if (str == NULL)
	{
		return (NULL);
	}
	for (y = 0; y < size; y++)
	{
		str = min + 1;
	}
	return (str);
}