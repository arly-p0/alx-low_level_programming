#include "main.h"
#include <stdio.h>
/**
 * str_inspect - inspect a function that compares two string
 * @s1: string 1 to be inspected
 * @s2: string 2 to be inspected
 * @u: integer left
 * @v: integer right
 * Return: 1 if the string can be considered identical, or 0 otherwise
 */
int str_inspect(char *s1, char *s2, int u, int v)
{
	if (*s1[u] == '\0' && *s2[v] == '\0')
	{
		return (1);
	}
	if (s1[u] == s2[v])
	{
		return (str_inspect(s1, s2, u + 1, v + 1));
	}
	if (s1[u] == '\0' && s2[v] == '*')
	{
		return (str_inspect(s1, s2, u, v + 1));
	}
	if (s2[v] == '*')
	{
		return (str_inspect(s1, s2, u + 1, v) || str_inspect(s1, s2, u, v + 1));
	}
	return (0);
}
/**
 * wildcmp - a function that compares two string 
 * @s1: string one to be compared
 * @s2: string two to be compared
 * Return: 1 if the string can be considered identical, or  0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	return (str_inspect(s1, s2, 0, 0));
}
