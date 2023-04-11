#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - function that concantenates two strings
 * @s1: first string
 * @s2: second string
 * Return: 0.
 */
char *str_concat(char *s1, char *s2)
{
	char *count;
	int n, m;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	n = m = 0;
	while (s1[n] != '\0')
	{
		n++;
	}
	while (s2[m] != '\0')
	{
		m++;
	}
	count = malloc(sizeof(char) * (n + m + 1));
	if (count == NULL)
	{
		return (NULL);
	}
	n = m = 0;
	while (s1[n] != '\0')
	{
		count[n] = s1[n];
		n++;
	}
	while (s2[m] != '\0')
	{
		count[n] = s2[m];
		n++, m++;
	}
	count[n] = '\0';
	return (count);
}
