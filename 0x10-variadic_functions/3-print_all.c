#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - function that prints anything
 * @format: list of type of argument to be passed
 */
void print_all(const char * const format, ...)
{
	va_list arg;
	int k;
	char *ptrs, *seps = "";

	va_start(arg, format);
	k = 0;

	if (format)
	{
		while (format[k])
		{
			switch (format[k])
			{
				case 'c':
					printf("%s%c", seps, va_arg(arg, int));
					break;
				case 'i':
					printf("%s%d", seps, va_arg(arg, int));
					break;
				case 'f':
					printf("%s%f", seps, va_arg(arg, double));
					break;
				case 's':
					ptrs = va_arg(arg, char *);
					if (ptrs == NULL)
					{
						ptrs = "(nil)";
					}
					printf("%s%s", seps, ptrs);
					break;
				default:
					k++;
					continue;
			}
			seps = ", ";
			k++;
		}
	}
	printf("\n");
	va_end(arg);
}
