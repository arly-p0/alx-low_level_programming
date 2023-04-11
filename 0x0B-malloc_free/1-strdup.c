#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - function thar returns a pointer to a newly allocate memory
 * @str: string to be allocated
 * Return: 0.
 */
char *_strdup(char *str)
{
	int l = 0;
	int u = 0;
	char *ptr;


	if (str == NULL)
	{
		return (NULL);
	}
	while (str[l] != '\0')
	{
		l++;
	}
	ptr = malloc((l * sizeof(char)) + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (u = 0; str[u] != '\0'; u++)
	{
		ptr[u] = str[u];
	}
	ptr[u] = '\0';
	return (ptr);
}
