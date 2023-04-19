#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - a function that searches for an integer
 * @array: array
 * @size: number of elements in the array
 * @cmp: a pointer
 *
 * Return: -1 if no element matches
 */
int int_index(int *array, int size, int(*cmp)(int))
{
	int u;

	if (cmp == NULL || size <= 0 || array == NULL)
	{
		return (-1);
	}
	for (u = 0; u < size; u++)
	{
		if (cmp(array[u]) != 0)
		{
			return (u);
		}
	}
	return (-1);
}
