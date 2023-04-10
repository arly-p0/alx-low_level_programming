#include <stdio.h>
#include <stdlib.h>
/**
 * main - programm that adds positive numbers
 * @argc: argument integer
 * @argv: argument string
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int x, y, z;
	int sum = 0;

	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y] != '\0'; y++)
		{
			if (argv[x][y] == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		z = atoi(argv[x]);
		sum = sum + z;
	}
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	printf("%d\n", sum);
	return (0);
}
