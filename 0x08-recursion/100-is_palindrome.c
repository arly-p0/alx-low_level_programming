#include "main.h"
#include <stdio.h>
/**
 * l_recursion - prints a certain lenght of string
 * @p: the string
 * Return: the character of the lenght
 */
int l_recursion(char *p)
{
	if (p[0] != 0)
	{
		return (1 + l_recursion(p + 1));
	}
	return (0);
}
/**
 * inspect_pal - inspect  if the string is a palindrome
 * @s: the string
 * @u: the first integer
 * @v: the second integer
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int inspect_pal(char *s, int u, int v)
{
	if (s[u] == s[v])

		if (u > v / 2)
		{
			return (1);
		}
		else
		{
			return (inspect_pal(s, u + 1, v - 1));
		}
		else
		{
			return (0);
		}
}
/**
 * is_palindrome - a function that prints a string of a palindrome
 * @s: the string to be printed
 * Return: 1 if a string is a palindrome 0 otherwise
 */
int is_palindrome(char *s)
{
	return (inspect_pal(s, 0, l_recursion(s) - 1));
}
