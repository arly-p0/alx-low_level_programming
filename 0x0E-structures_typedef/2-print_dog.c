#include <stdio.h>
#include "dog.h"
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
			printf("name: (NULL)\n");
		}
		else
		{
			printf("name: %s\n", (*d).name);
		}
		printf("age: %f\n", (*d).age);
		if ((*d).name == NULL)
		{
			(*d).owner = "(NULL)";
		}
		printf("owner: %s\n", (*d).owner);
	}
}
