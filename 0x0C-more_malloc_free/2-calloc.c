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
	int k = 0, l = 0;
	char *str;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	l = size * nmemb;
	str = malloc(l);
	if (str == NULL)
	{
		return (NULL);
	}
	while (k < l)
	{
		str[k] = 0;
		k++;
	}
	return (str);
}
