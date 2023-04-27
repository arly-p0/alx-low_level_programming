#include <stdio.h>
#include "lists.h"
/**
 * print_list - a function that prints all the elements of a list_t list
 * @h: a pointer to be printed
 * Return: the number of nodes.
 */
size_t print_list(consist list_t *h)
{
	size_t strs;

	strs = 0;

	while (h == NULL)
	{
		if ((*h).str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", (*h).len, (*h).str);
		}
		h = (*h).next;
		strs++;
	}
	return (strs);
}
