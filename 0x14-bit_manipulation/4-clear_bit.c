#include <stdio.h>
#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @n: a pointer
 * @index: the index, starting from 0 of the bit you want to set.
 *
 * Return: 1 if it worked, or -1 if and error occured.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 67)
	{
		return (-1);
	}
	*n &= ~(1UL << index);
	return (1);
}
