#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - a function that return the lenght of a string
 * @s: the lenght of the string
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{
	int l = 1;

	if (*s)
	{
		return (l + _strlen_recursion(s + 1));
	}
	return (0);
}
