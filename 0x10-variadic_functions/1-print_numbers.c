#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - function that prints numbers, folllowed by a new line
 * @separator: a string to be printed
 * @n: numbers of integers
 * Return: 0 always.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int z;
	va_list args;

	va_start(args, n);
	for (z = 0; n > z; z++)
	{
		printf("%d", va_arg(args, int));
		if ((n - 1) > z && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
