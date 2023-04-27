#include <stdio.h>
#include "lists.h"
/**
 * list_len - function that returns the number of elements in a linked list
 * @h: a pointer
 * Return: the number of elements in a linked list
 */
size_t list_len(const list_t *h)
{
	size_t number_of_elements;

	number_of_elements = 0;

	while (h != NULL)
	{
		number_of_elements++;
		h = (*h).next;
	}
	return (number_of_elements);
}
