#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - function that prints a name
 * @name: character to be printed
 * @f: pointer
 * Return: 0 Always.
 */
void print_name(char *name, void (*f) (char *))
{
	if (name == NULL && f == NULL)
	{
		return;
	}
	f(name);
}
