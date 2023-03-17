
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - prints the last digit of a randomly number generated number
 *
 * whether it is a greater than 3, less than 6, or 0
 *
 * Return: 0 (success)
 */
int main(void)
{
	int n;
	int p;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	p = n % 10;
	/* your code goes there */
	p = n % 10;
	if (p > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, p);
	}
	else if (p == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, p);
	}
	else if (p < 6 && p != 0)
	{
		printf("Last digit of %d is %d and less than 6 and not 0\n", n, p);
	}
	return (0);
}
