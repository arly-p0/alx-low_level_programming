#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 * @s: a pointer to the memory
 * @b: a constant character
 * @n: a byte of the memory
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	 int p = 0;

	for (; n > 0; p++)
	{
		s[p] = b;
		p--;
	}
	return (s);
}
