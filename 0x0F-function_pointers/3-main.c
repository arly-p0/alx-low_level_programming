#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - program that performs simple operators
 * @argc: argument
 * @argv: an array
 *
 * Return: 0 Always.
 */
int main(int argc, char *argv[])
{
	char *op;
	int s, y;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	s = atoi(argv[1]);
	y = atoi(argv[3]);
	op = argv[2];

	if (op[1] != '\0' || get_op_func(op) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*op == '/' || *op == '%') && y == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(op)(s, y));
	return (0);
}
