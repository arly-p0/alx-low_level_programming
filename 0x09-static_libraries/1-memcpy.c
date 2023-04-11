#include <stdio.h>
#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @src: a source of memory
 * @dest: a memory area
 * @n: number of byte to be copied
 * Return: a pointer to the dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int c;

	for (c = 0; c < n; c++)
		dest[c] = src[c];

	return (dest);
}
