#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a linked list
 * @h: pointer to be used in the list
 *
 * Return: the number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t number_of_nodes;

	number_of_nodes = 0;
	while (h != NULL)
	{
		h = (*h).next;
		number_of_nodes += 1;
	}
	return (number_of_nodes);
}
