#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - function that concatenates all the arguments of your program
 * @ac: integer to be concantenate
 * @av: an array
 * Return: Always 0.
 */
char *argstostr(int ac, char **av)
{
	int l = 0, y = 0, z = 0, k = 0;
	char *arstr;

	if (ac == 0 || av == NULL)
	return (NULL);

	for (l = 0; l < ac; l++)
	{
		for (y = 0; av[l][y]; y++)
			k++;
	}
	k += ac;
	arstr = malloc(sizeof(char) * k + 1);
	if (arstr == NULL)
	{
		return (NULL);
	}
	for (l = 0; l < ac; l++)
	{
		for (y = 0; av[l][y]; y++)
		{
			arstr[z] = av[l][y];
			z++;
		}
		if (arstr[z] == '\0')
		{
			arstr[z++] = '\n';
		}
	}
	return (arstr);
}
