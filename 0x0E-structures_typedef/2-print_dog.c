#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * print_dog - function that prints a struct dog
 * @d: pointer to be printed
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if ((*d).name == NULL)
		{
			printf("Name: (NULL)\n");
		}
		else
		{
			printf("Name: %s\n", (*d).name);
		}
		printf("Age: %f\n", (*d).age);
		if ((*d).name == NULL)
		{
			(*d).owner = "(NULL)";
		}
		printf("Owner: %s\n", (*d).owner);
	}
}
