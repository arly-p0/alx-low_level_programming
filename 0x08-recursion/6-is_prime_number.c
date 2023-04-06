#include "main.h"
#include <stdio.h>
/**
 * inspect - inspect if number is prime
 * @p: the first integer
 * @q: the second integer
 * Return: 1 if the input integer is a prime number, otherwise 0.
 */
int inspect(int p, int q)
{
	if (q <= 1 || q % p == 0)
	{
		return (0);
	}
	else if (p > q / 2)
	{
		return (1);
	}
	else
	{
		return (inspect(p + 1, q));
	}
}

/**
 * is_prime_number - prints the input integer of a prime number
 * @n: a prime number integer
 * Return: 1 if the input integer is a prime number, otherwise 0.
 */
int is_prime_number(int n)
{
	if (n == 2)
	{
		return (1);
	}
	return (inspect(2, n));
}
