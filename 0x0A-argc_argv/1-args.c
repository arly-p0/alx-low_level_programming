#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints the number of argument passed into it
 * @argc: argument integer
 * @argv: argument string
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	(void) argv;

	if (argc >= 0)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
