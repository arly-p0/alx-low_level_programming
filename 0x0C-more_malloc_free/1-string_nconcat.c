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
	unsigned int k, l, m, p;

	m = p = 0;
	while (s1[k] != '\0')
		k++;
	while (s2[l] != '\0')
		l++;
	if (n >= m)
		p = k + m;
	else
		p = k + n;

	ptrs = malloc(sizeof(char) * p + 1);

	if (ptrs == NULL)
		return (NULL);
	m = 0;
	while (l < p)
	{
		if (l <= k)
			ptrs[l] = s1[l];
		if (l >= k)
			ptrs[l] = s2[m];
		m++;
		l++;
	}
	ptrs[l] = '\0';
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	return (ptrs);
}
