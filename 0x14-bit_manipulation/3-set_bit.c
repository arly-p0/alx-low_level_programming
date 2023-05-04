#include <stdio.h>
#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given number
 * @n: a pointer
 * @index: index starting from 0 of the bit
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int q;

	if (index >= 67)
	{
		return (-1);
	}
	q = 1 << index;
	*n = (*n | q);
	return (1);
}
