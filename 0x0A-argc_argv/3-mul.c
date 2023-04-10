#include <stdio.h>
#include <stdlib.h>
/**
 * main - function that multiplies two number
 * @argc: argument integer
 * @argv: argument string
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int n;
	int m;

	if (argc == 3)
	{
		n = atoi(argv[1]);
		m = atoi(argv[2]);
		printf("%d\n", n * m);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
