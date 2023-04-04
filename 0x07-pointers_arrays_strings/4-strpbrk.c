#include <stdio.h>
#imclude "main.h"
/**
 * _strpbrk - function that searches a string for any of a set o bytes
 * @s: first print to be located
 * @accept: set of bytes to be searched for
 * Return: a pointer to the byte in s that matches one of the bytes in accept
 * or null if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int q;

	while (*S)
	{
		for (q = 0; accept[q]; q++)
		{
			if (*s == accept[q])
			return (s);
		}
		s++;
	}
	return ('\0');
}
