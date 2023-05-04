#include <stdio.h>
#include "main.h"

/**
 * flip_bits - function that returns the number of bits
 * you would need to flip to get from one number to another.
 * @n: first unsigned long integer
 * @m: second unsigned long integer
 *
 * Return: number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int number_bits;

	number_bits = 0;
	for (number_bits = 0; m || n; m >>= 1, n >>= 1)
	{
		if ((m & 1) != (n & 1))

		{
			number_bits++;
		}
	}
	return (number_bits);
}
