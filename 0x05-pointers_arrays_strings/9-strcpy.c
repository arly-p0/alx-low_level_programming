#include "main.h"
/**
 * _strcpy - copy a string
 * @dest: destination value
 * @src: source value
 * Return: always 0
 */
void _strcpy(char *dest, char *src)
{
	int i;


	for (i = 0; src[i] != '\0'; i++)
	{
	dest[i] = src[i];
	}
	dest[i++] = src[i];
	return (dest);
}