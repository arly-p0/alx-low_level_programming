#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - function that prints strings followed by a new line
 * @separator: spring to be printed between strings
 * @n: the number of string to be passed
 *
 * Description: if separator is NULL, don't print
 * instead print (nil) if one of the string is NULL
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	char *ptrs;
	unsigned int y;

	va_start(arg, n);
	for (y = 0; n > y; y++)
	{
		ptrs = va_arg(arg, char*);
		if (ptrs == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", ptrs);
		}
		if ((n - 1) > y && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(arg);
	printf("\n");
}
