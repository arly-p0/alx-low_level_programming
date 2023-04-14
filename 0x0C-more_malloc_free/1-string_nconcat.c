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
	unsigned int i = 0, y = 0, z = 0, k = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[z])
		z++;
	if (z <= n)
		k = i + z;
	else
		k = i + n;

	ptrs = malloc(sizeof(char) * k + 1);

	if (ptrs == NULL)
		return (NULL);
	z = 0;
	while (y < k)
	{
		if (y <= k)
			ptrs[y] = s1[y];
		if (i <= y)
		{
			ptrs[y] = s2[z];
			z++;
		}
		y++;
	}
	ptrs[y] = '\0';
	return (ptrs);
}
