#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints all arguments it receives
 * @argc: argument integer
 * @argv: argument string
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int k = 0;

	if (argc >= 0)
	{
		for (k = 0; k < argc; k++)
		{
			printf("%s\n", argv[k]);
		}
	}
	return (0);
}
