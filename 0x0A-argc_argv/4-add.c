#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - programm that adds positive numbers
 * @argc: argument integer
 * @argv: argument string
 * Return: 1 if one number contains symbols that are not digits,
 *else prints error
 */
int main(int argc, char *argv[])
{
	int n;
	unsigned int m, sum = 0;
	char *i;

	if (argc > 1)
	{
		for ( n = 1; n < argc; n++)
		{
			i = argv[n];
			for (m = 0; m < strlen(i); m++)
			{
				if (i[m] < 48 || i[m] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum = sum + atoi(i);
			i++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
