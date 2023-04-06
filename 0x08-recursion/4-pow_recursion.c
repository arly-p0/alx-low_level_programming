#include "main.h"
#include <stdio.h>
/**
 * _pow_recursion - function that returns the value of y raised to power of y
 * @x: the first integer
 * @y: the second integer
 * Return: -1 if y is lower than 0.
 */
int _pow_recursion(int x, int y)
{
	int len = x;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	len *= _pow_recursion(x, y - 1);
	return (len);
}
