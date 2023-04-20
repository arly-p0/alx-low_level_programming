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
	int u, v, result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	u = atoi(argv[1]);
	v = atoi(argv[3]);
	op = argv[2];

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	op = argv[2];
	if ((*op == '/' || *op == '%') && v == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = get_op_func(op)(u, v);
	printf("%d\n", result);
	return (0);
}
