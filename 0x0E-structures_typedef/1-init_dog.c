#include <string.h>
#include "dog.h"
/**
 * init_dog - function that intialize a variable of type struct dog
 * @d: pointer to struct
 * @name: name to be intialized
 * @age: age to be initialized
 * @owner: owner to be initializes
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).age = age;
		(*d).name = name;
		(*d).owner = owner;
	}
}
