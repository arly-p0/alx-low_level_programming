#include "main.h"
#include <stdio.h>
/**
 * _strstr - function that locates a substring
 * @haystack: a string
 * @needle:finding the first occurrence of the substring
 * Return: a pointer to the beginning of the located substring
 * or null if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *p = haystack;
		char *q = needle;

		while (*p == *q && *q != '\0')
		{
			p++;
			q++;
		}
		if (*q == '\0')
			return (haystack);
	}

	return (0);
}
