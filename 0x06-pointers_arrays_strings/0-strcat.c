#include "main.h"
/**
 * _strcat - concatenate two strings
 * @dest: destination string
 * @src: the source string
 * Return: the destination string
 */
char *_strcat(char *dest, char *src)
{
	int deslen = 0;
	int srclen = o;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
		destlen++;
	for (i = 0; src[i] != '\0'; i++)
		srclen++;
	for (i = 0; i <= srclen; i++)
		dest[destlen + 1] = src[i];
	return (dest);
}
