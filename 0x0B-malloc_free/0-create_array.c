#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - creates an array of chars
 * @size: an integer of an array
 * @c: char to be to used
 * Return: NULL if size is 0, or else NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int k;
	char *arr;

	if (size == 0)
	{
		return (0);
	}
	arr = malloc(size * sizeof(char));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < size; k++)
	{
		arr[k] = c;
	}
	return (arr);
}
