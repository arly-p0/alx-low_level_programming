#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * *add_nodeint - function that adds a new node at the beginning of a list
 * @head: pointer to a pointer to be used in the list
 * @n: an integer to be used in the new node
 *
 * Return: the address of the new element, NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node_ptrs;

	node_ptrs = malloc(sizeof(listint_t));

	if (node_ptrs == NULL)
	{
		return (NULL);
	}

	(*node_ptrs).n = n;
	(*node_ptrs).next = *head;
	*head = node_ptrs;

	return (node_ptrs);
}
