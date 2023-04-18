#include <stdio.h>
/**
 * main - a program that prints the name of a file
 *
 * Return: Always 0
 */
int main(void)
{
	char name[] = __FILE__;

	printf("%s\n", name);
	return (0);
}
