#include "main.h"
#include <stdio.h>
/**
 * inspect - inspect the natural square root of a number
 * @r: integer 1
 * @s: integer 2
 * Return: -1 if the integer does not have a natural square root
 */
int inspect(int r, int s)
{
	if (r * r == s)
	{
		return (r);
	}
	if (r * r > s)
	{
		return (-1);
	}
	return (inspect(r + 1, s));
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: an integer of the square root
 * Return: -1 if the integer does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (inspect(1, n));
}
