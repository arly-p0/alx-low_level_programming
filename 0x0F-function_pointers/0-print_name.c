#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - function that prints a name
 * @name: character to be printed
 * @f: a pointer
 *
 * Return: 0 Always.
 */
void print_name(char *name, void(*f)(char *))
{
	if (!name && !f)
	{
		return;
	}
	f(name);
}