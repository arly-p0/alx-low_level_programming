#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter
 * @array: array to be executed
 * @size: size of the array
 * @action: a pointer to the function
 * Return: Always 0.
 */
void array_iterator(int *array, size_t size, void(*action)(int))
{
	unsigned int z;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (z = 0; size > z; z++)
	{
		action(array[z]);
	}
}
