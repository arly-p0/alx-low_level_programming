#include "main.h"
#include <stdio.h>
/**
 * _strchr - function that locates a character in a string
 * @s: a string
 * @c: a character to be located
 * Return: a pointer to the first occurence of the character c in the string
 */
char *_strchr(char *s, char c)
{
	int k = 0;

	for (k = 0; s[k] >= '\0'; k++)
	{
		if (s[k] == c)
			return (c + k);
	}
	return (0);
}
