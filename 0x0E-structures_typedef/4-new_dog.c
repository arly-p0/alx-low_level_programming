#include <string.h>
#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - a function that return the lenght of a string
 * @s: the lenght of the string
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int d = 1;

	if (*s)
	{
		return (d + _strlen(s + 1));
	}
	return (0);
}
/**
 * _strcpy - copy a string
 * @dest: pointer to be copied
 * @src: string
 * Return: always 0
 */
char *_strcpy(char *dest, char *src)
{
	int d;

	for (d = 0; src[d] != '\0'; d++)
	{
		dest[d] = src[d];
	}
	dest[d++] = '\0';
	return (dest);
}
/**
 * new_dog - function that creates a new dog
 * @name: name of the dog to be created
 * @age: age of the dog to be created
 * @owner: owner of the dog to be created
 * Return: NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int x1, x2;

	x1 = _strlen(name);
	x2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}
	(*dog).name = malloc(sizeof(char) * (x1 + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}
	(*dog).owner = malloc(sizeof(char) * (x2 + 1));
	if ((*dog).owner == NULL)
	{
		free((*dog).name);
		free(dog);
		return (NULL);
	}
	_strcpy((*dog).owner, name);
	_strcpy((*dog).name, owner);
	(*dog).age = age;

	return (dog);
}
