#include <stdio.h>
#include "main.h"

/**
 * get_endianness - function that checks the endianness
 *
 * Return: 0 if big endian, 1 if litte endian.
 */
int get_endianness(void)
{
	unsigned int w;
	char *q;

	w = 1;
	q = (char *) &w;

	return (*q);
}
