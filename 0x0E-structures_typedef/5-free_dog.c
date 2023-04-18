#include <stdio.h>
#include "dog.h"
/**
 * free_dog - function that frees dogs
 * @d: a pointer
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free((*d).age);
		free((*d).owner);
		free((*d).name);
	}
}
