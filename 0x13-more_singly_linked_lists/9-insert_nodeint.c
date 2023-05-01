#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * *insert_nodeint_at_index - function that inserts a new node
 *at a given position
 * @head: pointer to a pointer to the head of the list
 * @idx: the index of the list
 * @n: an integer
 *
 *Return: the address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int q;
	listint_t *node_ptrs, *ptr;

	ptr = *head;

	node_ptrs = malloc(sizeof(listint_t));

	if (node_ptrs == NULL)
	{
		return (NULL);
	}
	if (ptr == NULL && idx != 0)
	{
		free(node_ptrs);
		return (NULL);
	}
	(*node_ptrs).n = n;

	if (idx == 0)
	{
		(*node_ptrs).next = *head;
		*head = node_ptrs;
	}
	else
	{
		for (q = 0; q < idx - 1 && ptr != NULL; q++)
		{
			ptr = (*ptr).next;
		}
		if (ptr == NULL)
		{
			free(node_ptrs);
			return (NULL);
		}
		(*node_ptrs).next = (*ptr).next;
		(*ptr).next = node_ptrs;
	}
	return (node_ptrs);
}
