#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: an integer
 * Return: sums of all its parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum;
	unsigned int k;

	va_start(args, n);
	sum = 0;
	va_start(args, n);
	if (n == 0)
	{
		return (0);
	}
	for (k = 0; n > k; k++)
	{
		sum = sum + va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
