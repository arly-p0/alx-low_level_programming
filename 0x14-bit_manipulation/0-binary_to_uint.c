#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: a pointer to a string
 *
 * Return: the converted number, or 0 if there is one or more chars
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number;
	int u;

	number = 0;
	if (b == NULL)
	{
		return (0);
	}
	for (u = 0; b[u] != '\0'; u++)
	{
		if (b[u] != '0' && b[u] != '1')
		{
			return (0);
		}
		number <<= 1;
		if (b[u] == '1')
		{
			number = number + 1;
		}
	}
	return (number);
}
