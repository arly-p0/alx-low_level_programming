#include "main.h"
#include <stdio.h>
/**
 * factoial - a function that prints the factorial of a given number
 * @n: an integer
 *
 * Return: factorial of the given number
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
