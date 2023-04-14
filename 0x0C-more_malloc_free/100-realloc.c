#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - function that reallocates a memory block
 * @old_size: old size in byte
 * @new_size: new size in byte
 * @ptr: pointer to the memory
 * Return: 0 Always
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *sptrs;
	unsigned int k;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		sptrs = malloc(new_size);
		if (sptrs == NULL)
		{
			return (NULL);
		}
		return (sptrs);
	}
	else
	{
		if (new_size == 0 && ptr != NULL)
		{
			free(ptr);
			return (NULL);
		}
	}
	sptrs = malloc(new_size);
	if (sptrs == NULL)
		return (NULL);
	for (k = 0; old_size > k && new_size > k; k++)
	{
		sptrs[k] = ((char *) ptr)[k];
	}
	free(ptr);
	return (sptrs);
}
