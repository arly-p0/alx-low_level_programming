#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the square matrix of integers
 * @a: spring
 * @size: character to input
 * Return: 0 always
 */
void print_diagsums(int *a, int size)
{
	int p, q sum1 = 0, sum2 = 0;

	for (p = 0; p <= (size * size); p = p + size + 1)
		sum1 = sum1 + a[p];
	for (q = size - 1; q <= (size * size) - size; q = q + size - 1)
	sum2 = sum2 + a[q];
	printf("%d, %d\n", sum1, sum2);
}
