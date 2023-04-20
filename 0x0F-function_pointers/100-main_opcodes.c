#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the opcodes of its own main function
 * @argc: an integer of argumen
 * @argv: an array
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int bytes, z;
	char *str;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	str = (char *)main;
	for (z = 0; bytes > z; z++)
	{
		if (z >= bytes - 1)
		{
			printf("%02hhx\n", str[z]);
			break;
		}
		printf("%02hhx ", str[z]);
	}
	return (0);
}
