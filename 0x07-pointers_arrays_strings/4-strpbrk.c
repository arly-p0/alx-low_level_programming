#include <stdio.h>
#include "main.h"
/**
 * _strpbrk - function that searches a string for any of a set o bytes
 * @s: first print to be located
 * @accept: set of bytes to be searched for
 * Return: a pointer to the byte in s that matches one of the bytes in accept
 * or null if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int j, n;

	for (j = 0; s[j] != '\0'; j++)
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[j] == accept[n])
				return (s + j);
		}
	return (0);
}
