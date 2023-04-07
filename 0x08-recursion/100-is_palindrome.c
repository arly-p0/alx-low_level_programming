#include "main.h"
#include <stdio.h>
/**
 * l_recursion - prints a certain lenght of string
 * @i: the string
 * Return: the character of the lenght
 */
int l_recursion(char *i)
{
	if (i[0] != '\0')
	{
		return (1 + l_recursion(i + 1));
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
	if (*(s + u) != *(s + v - 1))
	{
		return (0);
	}
	if (u >= v)
	{
		return (1);
	}
	return (inspect_pal(s, u + 1, v - 1));
}
/**
 * is_palindrome - a function that prints a string of a palindrome
 * @s: the string to be printed
 * Return: 1 if a string is a palindrome 0 otherwise
 */
int is_palindrome(char *s)
{
	return(inspect_pal(s, 0, l_recursion(s)-1));
}
