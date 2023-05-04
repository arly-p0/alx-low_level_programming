#include <stdio.h>
#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: an unsigned long integer
 * @index: index of the bit
 *
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int q;

	if (n == 0 && index < 67)
	{
		return (0);
	}
	for (q = 0; q <= 66; n >>= 1, q++)
	{
		if (index == q)
		{
			return (n & 1);
		}
	}
	return (-1);
}
