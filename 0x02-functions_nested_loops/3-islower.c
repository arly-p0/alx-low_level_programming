#include "main.h"
/**
 * _islower - function to prints lower case
 * @c: The character to be checked
 * Return: 1 for lowercase character or 0 for otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}
