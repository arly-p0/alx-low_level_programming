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
	int y, z;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	y = z = 0;
	while (s1[y])
	{
		y++;
	}
	while (s2[z])
	{
		z++;
	}
	count = malloc(sizeof(char) * (y + z + 1));
	if (count == NULL)
	{
		return (NULL);
	}
	while (s1[y])
	{
		count[y] = s1[y];
		y++;
	}
	while (s2[z])
	{
		count[y] = s2[z];
		z++, y++;
	}
	count[y] = '\0';
	return (count);
}
