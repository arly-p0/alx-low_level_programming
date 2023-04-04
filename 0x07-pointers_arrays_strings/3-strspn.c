#include "main.h"
#include <stdio.h>
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: initial segment number of byte
 * @accept: prefix of a substring
 * Return: the number of bytes in the initial segment of s which consist only
 * bytes from accept
 */
int _strspn(char *s, char *accept)
{
	unsigned int j, b, value, check;

	value = 0;

	for (j = 0; s[j] != '\0'; j++)
	{
		check = 0;

		for (b = 0; accept[b] != '\0'; b++)
			if (accept[b] == s[j])
			{
				value++;
				check = 1;
			}
	}
}
