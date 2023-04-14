#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two strings
 * @s1: first string to be concatenated
 * @s2: secong string to be concatenated
 * @n: an integer
 * Return: NULL if functiom fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptrs;
	unsigned int l = 0, y = 0, z = 0, k = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[l])
		l++;
	while (s2[z])
		z++;
	if (n >= z)
		k = l + z;
	else
		k = l + n;

	ptrs = malloc(sizeof(char) * l + 1);

	if (ptrs == NULL)
		return (NULL);
	z = 0;
	while (y < k)
	{
		if (y <= l)
			ptrs[y] = s1[y];
		if (y >= l)
		{
			ptrs[y] = s2[l];
			z++;
		}
		y++;
	}
	ptrs[y] = '\0';
	return (ptrs);
}
