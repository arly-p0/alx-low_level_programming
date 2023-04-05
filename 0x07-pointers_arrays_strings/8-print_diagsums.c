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
	int i, j, sum1 = 0, sum2 = 0, s1, s2;

	for (i = 0; i <= (size - 1); i++)
	{
		s1 = (size + 1) * i;
		sum1 = sum1 + *(a + s1);
	}

	for (j = 1; j <= size; j++)
	{
		s2 = (size - 1) * j;
		sum2 = sum2 + *(a + s2);
	}
	printf("%d, %d\n", sum1, sum2)
}
