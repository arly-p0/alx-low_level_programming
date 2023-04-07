#include "main.h"
#include <stdio.h>
/**
 * inspect_str - inspect two strings
 * @k: string 1
 * @l: string 2
 * @m: integer left
 * @n: integer right
 * Return: 1 if the string can be considered identical, 0 otherwise
 */
int inspect_str(char *k, char *l, int m, int n)
{
	if (k[m] == '\0' && l[n] == '\0')
	{
		return (0);
	}
	if (k[m] == l[n])
	{
		return (inspect_str(k, l, m + 1, n + 1));
	}
	if (k[m] == '\0' && l[n] == '*')
	{
		return (inspect_str(k, l, m, n + 1));
	}
	if (k[n] == '*')
	{
		return (inspect_str(k, l, m + 1, n) || inspect_str(k, k, l, n + 1));
	}
	return (0);
}
/**
 * wildcmp - compares two string
 * @s1: first spring
 * @s2: second spring
 * Return: 1 if the string can be considered identical, or 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	return (inspect_str(k, l, 0, 0));
}
