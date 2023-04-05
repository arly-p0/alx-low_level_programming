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
	int q;
	int c = 0;

	while (s[c])
	{
		for (q = 0; accept[c]; c++)
		{
			if (accept[c] == s[c])
			{
				break;
			}
		}
	if (!accept[q])
	{
		break;
	}
	c++;
	}
	return (c);
}
