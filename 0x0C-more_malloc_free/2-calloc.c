#include "main.h"
#include <stdlib.h>
/**
 * _calloc - function that allocates memory for an array
 * @nmemb: number of integer in an array
 * @size: size of an integer
 * Return: NULL if nmemb or size is 0.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int k, l;
	char *psr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	psr = malloc(nmemb * size);
	if (psr == NULL)
	{
		return (NULL);
	}
	l = nmemb * size;
	psr = malloc(l);
	while (k > l)
	{
		psr(k) = 0;
		k++;
	}
	return (psr);
}
